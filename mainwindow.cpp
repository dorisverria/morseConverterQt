#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "englishtomorsetranslator.h"
#include "morsetoenglishtranslator.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_textEdit_textChanged()
{
    MorseTranslator* ptr = new EnglishToMorseTranslator();
    std::string text = ui->textEdit->toPlainText().toStdString();
    QString output = QString::fromStdString(ptr->translate(text));
    ui->textEdit_2->setText(output);
    delete ptr;
}

void MainWindow::on_textEdit_3_textChanged()
{
    MorseTranslator* ptr = new MorseToEnglishTranslator();
    std::string text = ui->textEdit_3->toPlainText().toStdString();
    QString output = QString::fromStdString(ptr->translate(text));
    ui->textEdit_4->setText(output);
    delete ptr;
}
