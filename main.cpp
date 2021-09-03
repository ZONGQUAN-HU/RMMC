#include <QCoreApplication>
#include <QLocale>
#include <QTranslator>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
#include <iostream>
using namespace std;
#include <yuansu.h>
struct rmmc
{
        int num;
        char YuanSu[3];
        int YS_num;
}a = { 1,"Ca",1 }, b = { 2,"C",1 }, c = { 3,"O",3 };



int OutHelp();
int BaseMode();
int AdvancedMode();

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
    /*start*/
    //这是用来测试元素表输出的

            int i;
            for (i=0; i < 112; i++)
            {
                    printf("%d\t",YS_gz[i].YuanZi_XuShu);
                    printf("%s\t", YS_gz[i].YuanSu);
                    printf("%.0f\n",YS_gz[i].ZhiLiang);
            }
     /*
    switch (argc) {
    case 1:
            OutHelp();
            return 0;
    case 2:
            BaseMode(); break;
    case 3:
            BaseMode(); break;
    }*/

}
int OutHelp() {
        printf("你好");
        //显示rmmc-core程序使用帮助
        return 0;
}
int BaseMode()
{

}
int AdvancedMode()
{

}

