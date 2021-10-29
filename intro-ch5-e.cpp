#include "intro-ch5-e.h"
#include <iostream>
using std::cout;
using std::endl;


short int zeus = 99;
static double hera = 11;

void PrintNumbers(){
    cout << "Print Numbers - + - + - + - + - + - + - + - + " << endl;
    cout << "\tZeus = " << zeus << endl;
    zeus += 16;
    cout << "\tHera = " << hera << endl;
    hera += 7;
}
