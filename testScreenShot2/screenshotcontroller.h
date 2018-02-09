#ifndef SCREENSHOTCONTROLLER_H
#define SCREENSHOTCONTROLLER_H

#include <QWidget>


namespace Ui {
class ScreenShotController;
}

class ScreenShotController : public QWidget
{
    Q_OBJECT

public:
    explicit ScreenShotController(QWidget *parent = 0);
    ~ScreenShotController();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ScreenShotController *ui;
};

#endif // SCREENSHOTCONTROLLER_H
