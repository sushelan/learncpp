#include <iostream>
#include <cstdlib>

using namespace std;

int readInt()
{

    int integer;
    cout << "Enter an integer: ";
    cin >> integer;
    return integer;
}

double doubleNumber(double number)
{
    cout << number << " doubled is " << number * 2 << "\n";
    return number * 2;
}

int main()
{
    int integer{readInt()};
    doubleNumber(integer);
    return 0;
}