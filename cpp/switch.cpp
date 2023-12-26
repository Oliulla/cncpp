#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int day = 4;

    switch (day)
    {
    case 1:
        cout << "Saturday";
        break;
    case 2:
        cout << "Sunday";
        break;
    case 3:
        cout << "Monday";
        break;
    case 4:
        cout << "Tuesday";
        break;
    case 5:
        cout << "Wednesday";
        break;
    case 6:
        cout << "Thursday";
        break;
    default:
        cout << "Friday";
        break;
    }
}