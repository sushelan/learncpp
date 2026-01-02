#include <iostream>
#include "io.h"
using namespace std;

int readNumber()
{

    int integer;
    cout << "Enter an integer: ";
    cin >> integer;
    return integer;
}

void writeAnswer(int number)
{
    cout << "Result is " << number << endl;
}