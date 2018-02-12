#ifndef SCREENSHOTCONTROLLER_H
#define SCREENSHOTCONTROLLER_H

#include <QWidget>
#include <QSettings>

namespace Ui {
class ScreenShotController;
}

class ScreenShotController : public QWidget
{
    Q_OBJECT

public:
    explicit ScreenShotController(QWidget *parent = 0);
    ~ScreenShotController();
    
    void WriteInit(QString key, QString value);
    void ReadInit(QString key, QString &value);
private slots:
    void on_pushButton_clicked();



private:
    Ui::ScreenShotController *ui;



};

#endif // SCREENSHOTCONTROLLER_H
