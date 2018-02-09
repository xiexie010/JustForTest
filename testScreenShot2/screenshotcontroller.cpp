#include "screenshotcontroller.h"
#include "ui_screenshotcontroller.h"
#include "form.h"

#include <form.h>
#include <qdebug.h>
ScreenShotController::ScreenShotController(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ScreenShotController)
{
    ui->setupUi(this);
}

ScreenShotController::~ScreenShotController()
{
    delete ui;
}

void ScreenShotController::on_pushButton_clicked()
{

//    this->hide();

    Form *ff=new Form;
    ff->show();


}
