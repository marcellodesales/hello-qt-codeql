#include "mainwindow.h"
#include "./ui_mainwindow.h"


void flawed_strdup(const char *input)
{
	char *copy;

	/* Fail to allocate space for terminating '\0' */
	copy = (char *)malloc(strlen(input));
	strcpy(copy, input);
	return copy;
}

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
