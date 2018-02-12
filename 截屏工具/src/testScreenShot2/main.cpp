#include "mainwindow.h"
#include <QApplication>
#include <form.h>
#include "screenshotcontroller.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();




    ScreenShotController controller;
    controller.show();



    return a.exec();
}



