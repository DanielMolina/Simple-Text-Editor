/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QTextEdit *textEdit_filename;
    QCheckBox *checkBox;
    QLabel *label;
    QPushButton *pushButton_open;
    QTextEdit *textEdit_openFile;
    QCheckBox *checkBox_open;
    QLabel *label_open;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(781, 530);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 0, 761, 401));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 410, 75, 23));
        textEdit_filename = new QTextEdit(centralWidget);
        textEdit_filename->setObjectName(QStringLiteral("textEdit_filename"));
        textEdit_filename->setGeometry(QRect(90, 410, 221, 21));
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(320, 410, 81, 21));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(390, 410, 381, 21));
        pushButton_open = new QPushButton(centralWidget);
        pushButton_open->setObjectName(QStringLiteral("pushButton_open"));
        pushButton_open->setGeometry(QRect(10, 440, 75, 23));
        textEdit_openFile = new QTextEdit(centralWidget);
        textEdit_openFile->setObjectName(QStringLiteral("textEdit_openFile"));
        textEdit_openFile->setGeometry(QRect(90, 440, 221, 21));
        checkBox_open = new QCheckBox(centralWidget);
        checkBox_open->setObjectName(QStringLiteral("checkBox_open"));
        checkBox_open->setGeometry(QRect(320, 440, 61, 17));
        label_open = new QLabel(centralWidget);
        label_open->setObjectName(QStringLiteral("label_open"));
        label_open->setGeometry(QRect(390, 440, 381, 20));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 781, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "TextEdit", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Save", 0));
        checkBox->setText(QApplication::translate("MainWindow", "Confirm", 0));
        label->setText(QApplication::translate("MainWindow", "Input filename", 0));
        pushButton_open->setText(QApplication::translate("MainWindow", "Open", 0));
        checkBox_open->setText(QApplication::translate("MainWindow", "Confirm", 0));
        label_open->setText(QApplication::translate("MainWindow", "Input filename [include extension]", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
