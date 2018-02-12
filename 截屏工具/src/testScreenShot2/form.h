#ifndef FORM_H
#define FORM_H

#include <QWidget>


#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QFile>
#include <QUrlQuery>
#include <QHttpMultiPart>
#include <QClipboard>
#include <QSettings>

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = 0);
    ~Form();

    QRect currentRect_;
    QImage screen_;
    QImage darkScreen_;

    
    void ReadInit(QString key, QString &value);
protected:
    void paintEvent(QPaintEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void keyPressEvent(QKeyEvent *keyEvent);

private slots:
    void replyFinished(QNetworkReply *reply);
private:
    Ui::Form *ui;
    QPoint qstart;
    QPoint qend;
    QNetworkAccessManager * m_pNetWorkManager;
};

#endif // FORM_H
