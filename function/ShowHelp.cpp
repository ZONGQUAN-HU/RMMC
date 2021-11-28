#include <QObject>
#include <QTranslator>
#include <iomanip>
#include <iostream>

//#include <rmmc.h>
using namespace std;

QString Usage;
QStringList UsageCommands;
QString Common;
QStringList CommonMenu;
QStringList CommonCommands;
QString HelpSubCommand;
QString HelpCommand;



void MakeHelpMenu();
void ShowModeHelpMenu(int mode);


void ShowHelpMenu(){
    MakeHelpMenu();
    cout << Usage.toStdString() << " " << UsageCommands[0].toStdString() << endl;
    //cout << setiosflags(ios::right);
    cout <<setw(Usage.length()+UsageCommands[1].length()+1)<<UsageCommands[1].toStdString() << endl << endl;
    cout << Common.toStdString() << endl;
    cout << setiosflags(ios::left);
    cout << "\t" << setw(10)<<CommonCommands[0].toStdString()<<setw(CommonMenu[0].length()+1)<<CommonMenu[0].toStdString() << endl;
    cout << "\t" << setw(10)<<CommonCommands[1].toStdString()<<setw(CommonMenu[1].length()+1)<<CommonMenu[1].toStdString() << endl;
    cout << endl <<HelpSubCommand.toStdString() <<endl;
    cout << HelpCommand.toStdString() <<endl;
}
void MakeHelpMenu(){
    Usage=QObject::tr("用法：rmmc");
    UsageCommands << "[--version] [--help]" << "<command> [<args>]";
    //UsageCommands[1]=;
    Common="下面是常用的rmmc命令：\n计算和显示分子式的信息";
    CommonMenu << "显示简单的信息和低精度的相对分子质量结果" << "显示简单的信息和低精度的相对分子质量结果";
    CommonCommands << "simple" << "complete";
    //CommonCommands[1]=;
    HelpSubCommand="命令 'rmmc help -a' 显示可用的子命令。";
    HelpCommand="查看 'rmmc help <command>' 以显示子命令的帮助。";
}
void MakeModeMenu(int mode){

}
void ShowModeHelpMenu(int mode){

}
