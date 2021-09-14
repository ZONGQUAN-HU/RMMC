#include <QCoreApplication>
#include <QLocale>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
#include <iostream>
#include <QDebug>
//#include <cstdio>
#include <QTranslator>
#include <QObject>
#include <QString>
//
#include <color.h>
#include <yuansu.h>
using namespace std;

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
    /*while (argc-->1) {
        printf("%s\n",*++argv);
    }*/

    //参数判断处理
    switch (argc) {
    case 1:
        int i;
        printf("原子序数\t\t元素符号\t\t相对原子质量\n");
        for (i=0; i < 112; i++)
        {
            printf("%d\t\t",YS_gz[i].Z);
            printf("%s\t\t",YS_gz[i].Symobl);
            if(YS_gz[i].NoStandardAtomicWeight==true){
                printf("[%.0f]\n",YS_gz[i].Standard_atomic_weights);
            }else {
                printf("%.0f\n",YS_gz[i].Standard_atomic_weights);
            }
        }
        //printf_yellow("Debug:status:argc=1\n");//debug
        break;
    case 2:
        //printf_yellow("Debug:status:argc=2\n");//debug
        if(strcmp(argv[1],"base")==0){
            int i;
            printf("原子序数\t\t元素符号\t\t元素名称\t\t相对原子质量\n");
            for (i=0; i < 112; i++)
            {
                printf("%d\t\t",YS_gz[i].Z);
                printf("%s\t\t", YS_gz[i].Symobl);
                QByteArray ba=YS_IUPAC_Advance_Info[i].ElementName_local.toLocal8Bit();
                char *c=ba.data();
                cout << c << "\t\t";
                if(YS_gz[i].NoStandardAtomicWeight==true){
                    printf("[%.1f]\n",YS_gz[i].Standard_atomic_weights);
                }else {
                    printf("%.1f\n",YS_gz[i].Standard_atomic_weights);
                }
            }
            //printf_yellow("Debug:base\n");//debug
        }else
            if(strcmp(argv[1],"advance")==0){
            //printf_yellow("Debug:advance");//debug
            int i;
            cout << "原子序数\t元素符号\t元素国际名称\t元素名称\t元素标记\t精确的相对原子质量\n";
            for (i=0; i < 112; i++)
            {
                QByteArray ba=YS_IUPAC_Advance_Info[i].ElementName_local.toLocal8Bit();
                char *c=ba.data();
                cout << setiosflags(ios::fixed) << setprecision(6) << setiosflags(ios::left);
                cout << setw(16) << YS_gz[i].Z << setw(16) << YS_gz[i].Symobl << setw(16) << YS_IUPAC_Advance_Info[i].ElementName_en << setw(17) << c;
                if(strcmp(YS_IUPAC_Advance_Info[i].Mark,"red")==0){
                    cout << "\033[0m\033[1;31mred\033[0m" << "\n";
                }else if(strcmp(YS_IUPAC_Advance_Info[i].Mark,"huan")==0){
                    cout << "\033[0m\033[1;33myellow\033[0m" << "\n";
                }else if(strcmp(YS_IUPAC_Advance_Info[i].Mark,"blue")==0){
                    cout << "\033[0m\033[1;34mblue\033[0m" << "\n";
                }else if(strcmp(YS_IUPAC_Advance_Info[i].Mark,"white")==0){
                    cout << "\033[0m\033[1;37mwhite\033[0m" << "\n";
                }
            }
        }


        break;
    default:
        break;
    }
}
