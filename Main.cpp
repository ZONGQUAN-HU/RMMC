#include <QCoreApplication>
#include <QLocale>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
#include <iostream>
#include <QDebug>
#include <QString>
#include <QStringList>
//#include <cstdio>
#include <QTranslator>
//#include <QObject>
#include <QString>
#include <rmmc.h>
#include <Element.h>

using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "rmmc-core_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    /*start开始*/
    ProgramParameterJudgment(argc,argv);


    //参数判断处理

}
