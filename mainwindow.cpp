#include "mainwindow.h"
#include "./ui_mainwindow.h"

// CodeQL example: https://codeql.github.com/codeql-query-help/cpp/cpp-badly-bounded-write/
void congratulateUser(const char *userName)
{
	char buffer[80];

	// BAD: even though snprintf is used, this could overflow the buffer
	// because the size specified is too large.
	snprintf(buffer, 256, "Congratulations, %s!", userName);

	MessageBox(hWnd, buffer, "New Message", MB_OK);
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
