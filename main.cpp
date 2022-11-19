#include "echoknow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    EchoKnow w;
    w.show();
    return a.exec();
}
