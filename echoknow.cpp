#include "echoknow.h"
#include "ui_echoknow.h"

EchoKnow::EchoKnow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::EchoKnow)

{
    ui->setupUi(this);

}




EchoKnow::~EchoKnow()
{
    delete ui;
}

