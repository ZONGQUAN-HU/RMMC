#include <rmmc.h>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
#include <iostream>
#include <string.h>
using namespace std;

int ModeJudgment(char *argv[]);

//int Mode;
int ProgramParameterJudgment(int argc, char *argv[]){
    switch (argc) {
    case 1:
        //cout << argv[0];
        ShowHelpMenu();
        return 0;
    case 2:

        ModeJudgment(argv);
    default:
        break;
    }
    return 0;
}
int ModeJudgment(char *argv[]){
    if(!strcmp(argv[1],"simple")){
        return 0;
    }else if (!strcmp(argv[1],"complete")) {
        return 1;
}
    return -1;
}
