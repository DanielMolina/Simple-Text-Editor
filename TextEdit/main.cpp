#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication TextEdit(argc, argv);
    MainWindow w;
    w.show();

    return TextEdit.exec();
}
