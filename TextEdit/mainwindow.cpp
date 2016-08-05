#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <fstream>
#include <ostream>
#include <string>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// save a text file when button is clicked
void MainWindow::on_pushButton_clicked()
{
    // only save file if box is checked
    if(ui->checkBox->isChecked())
    {
        QString filename = ui->textEdit_filename->toPlainText();
        ui->textEdit->setDocumentTitle(filename);
        string document = ui->textEdit->toPlainText().toStdString();
        fstream file;
        file.open(filename.toStdString() + ".txt", fstream::out);
        if(file.is_open())
        {
            file << document;
            file.close();
            ui->label->setText(filename + ".txt saved to " + QDir::currentPath());
            // reset ui elements
            ui->textEdit_filename->clear();
            ui->checkBox->setChecked(false);
        }
        else
        {
            ui->label->setText("unable to save file");
        }
    }
}

// opens a text file when button is clicked
void MainWindow::on_pushButton_open_clicked()
{
    // only open file if box is checked
    if(ui->checkBox_open->isChecked())
    {
        QString filename = ui->textEdit_openFile->toPlainText();
        ui->textEdit->setDocumentTitle(filename);
        fstream file;
        file.open(filename.toStdString(), fstream::in);
        if(file.is_open())
        {
            string document;
            string line;
            while(getline(file, line))
            {
                document.append(line + "\n");
            }
            QString text = QString::fromStdString(document);
            ui->textEdit->setText(text);
            //reset ui elements
            ui->textEdit_openFile->clear();
            ui->checkBox_open->setChecked(false);
        }
        else
        {
            ui->label_open->setText("unable to open file");
        }
    }
}
