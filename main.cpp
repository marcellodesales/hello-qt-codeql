#include "mainwindow.h"

#include <QApplication>

// CodeQL C++ https://docs.github.com/en/code-security/code-scanning/managing-your-code-scanning-configuration/c-cpp-built-in-queries
// About Query packs: https://docs.github.com/en/code-security/code-scanning/creating-an-advanced-setup-for-code-scanning/customizing-your-advanced-setup-for-code-scanning#using-queries-in-ql-packs
// C++ Queries: https://docs.github.com/en/code-security/code-scanning/managing-your-code-scanning-configuration/c-cpp-built-in-queries
// Write CodeQL Queries: https://codeql.github.com/docs/codeql-language-guides/codeql-for-cpp/ 

// Specific Example on addition https://codeql.github.com/codeql-query-help/cpp/cpp-bad-addition-overflow-check/
bool checkOverflow(unsigned short x, unsigned short y) {
  // BAD: comparison is always false due to type promotion
  return (x + y < x);  
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
