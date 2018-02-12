#include "screenshotcontroller.h"
#include "ui_screenshotcontroller.h"
#include "form.h"

#include <form.h>
#include <qdebug.h>
#include <QHotkey>




ScreenShotController::ScreenShotController(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ScreenShotController)
{
    ui->setupUi(this);
    //设置全局快键键
    QHotkey *hotkey = new QHotkey(QKeySequence("Alt+P"), true); // Alt 和 P 之间不能有空格
        qDebug() << "Is Registered: " << hotkey->isRegistered();
        connect(hotkey, &QHotkey::activated, [this](){
            Form *ff=new Form;
            ff->show();
        });

    QString initStr;
    ReadInit("ip",initStr);
    if(initStr.trimmed().length()==0)initStr="127.0.0.1";
    ui->lineEdit->setText(initStr);




}

ScreenShotController::~ScreenShotController()
{
    delete ui;
}

void ScreenShotController::ReadInit(QString key, QString &value)
{
    value = QString("");
    QString path = "ip.ini";

    //创建配置文件操作对象
    QSettings *config = new QSettings(path, QSettings::IniFormat);

    //读取配置信息
    value = config->value(QString("config/") + key).toString();
    delete config;
}

void ScreenShotController::WriteInit(QString key, QString value)
{
    QString path = "ip.ini";

    //创建配置文件操作对象
    QSettings *config = new QSettings(path, QSettings::IniFormat);

    //将信息写入配置文件
    config->beginGroup("config");
    config->setValue(key, value);
    config->endGroup();
    delete config;
}

void ScreenShotController::on_pushButton_clicked()
{
    qDebug()<<"begin";

//    this->hide();

//    Form *ff=new Form;
//    ff->show();

    //测试上传文件给后台
    WriteInit("ip",ui->lineEdit->text());
    


}

