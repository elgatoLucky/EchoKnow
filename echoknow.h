#ifndef ECHOKNOW_H
#define ECHOKNOW_H

#include "qpushbutton.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class EchoKnow; }
QT_END_NAMESPACE

class EchoKnow : public QMainWindow
{
    Q_OBJECT

public:
    EchoKnow(QWidget *parent = nullptr);
    ~EchoKnow();

private slots:
private:
    Ui::EchoKnow *ui;
    QPushButton *pushButton;
};
#endif // ECHOKNOW_H
