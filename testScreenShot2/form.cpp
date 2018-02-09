#include "form.h"
#include "ui_form.h"
#include <QPixmap>
#include <QScreen>
#include <QPainter>
#include <QMouseEvent>
#include <QDebug>
Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{

    this->setWindowFlags(Qt::FramelessWindowHint);//这个是什么按钮都没有了
    this->setWindowState( Qt::WindowFullScreen );


    //实现保存截图到D:\\one.png
    QScreen *screen=QGuiApplication::primaryScreen();

    QPixmap originalPixmap = screen->grabWindow(0);

    //两张图一个正常一个暗图
    screen_ = originalPixmap.toImage();
    darkScreen_ = screen_;
    //变暗的过程
    int bytesPerLine = darkScreen_.width() * darkScreen_.depth() / 8;
    for ( int i = 0 ; i < darkScreen_.height() ; ++ i )

    {

        uchar* lineBuf = darkScreen_.scanLine(i);

        //scanLine函数可以取得指定行的起始指针，不必再自己计算了。取得行指针后对每像素RGB值进行操作

        for ( int x = 0 ; x < bytesPerLine ; ++ x )

            lineBuf[x] /= 2;

    }



}



void Form::paintEvent(QPaintEvent *event)
{

    QPainter painter(this);


    painter.drawImage(0, 0, darkScreen_);
    painter.drawImage(currentRect_, screen_, currentRect_, Qt::AutoColor);
}

void Form::mouseMoveEvent(QMouseEvent *event)
{

    //        if ( dragging_ )
    //            end_ = event->globalPos();

    //        //保存旧区域，用于后面的区域合并

    QRect oldRect = currentRect_;

    //        //设置新区域

    //        currentRect_.setTopLeft(start_);

    //        currentRect_.setBottomRight(end_);

    //        //调/用normalized函数解决负宽度或者负高度问题

    //        currentRect_ = currentRect_.normalized();

    // QRect::united()函数用来求两个rect合并后的rect，可以省去许多手工计算。

    //且QT的repaint()函数也不需要关心背景擦除问题，QT4以上都是自动double buffer
    currentRect_.setTopLeft(qstart);
    currentRect_.setBottomRight(event->globalPos());
    repaint(oldRect.united(currentRect_));
}
void Form::mousePressEvent(QMouseEvent *event)
{

    qstart=event->globalPos();


}

void Form::keyPressEvent(QKeyEvent *keyEvent)
{

    if (keyEvent->key() == Qt::Key_Enter || keyEvent->key() == Qt::Key_Return)
       {
              //指向你想要触发的代码
        QImage rImage=screen_.copy(qstart.x(),qstart.y(),qend.x()-qstart.x(),qend.y()-qstart.y());
        rImage.save("D:\\20180208.png");
        this->close();
       }
}


void Form::mouseReleaseEvent(QMouseEvent *event)
{
    qend=event->globalPos();
}

Form::~Form()
{
    delete ui;
}
