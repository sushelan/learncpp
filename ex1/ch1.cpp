#include <cstdlib>
#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int first, second;
    while (1)
    {
        cout << "Enter an integer: ";
        if (!(cin >> first))
        {

            cout << "invalid input, try again.";
            cin.clear();
            cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        cout << "Enter a second integer: ";
        if (!(cin >> second))
        {

            cout << "invalid input, try again.";
            cin.clear();
            cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        break;
    }

    cout << first << " + " << second << " = " << (first + second) << endl;
    cout << first << " - " << second << " = " << (first - second) << endl;

    return 0;
}