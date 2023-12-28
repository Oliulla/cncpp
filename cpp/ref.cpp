#include <iostream>
using namespace std;

int main()
{
    string food = "Pizza";
    string &meal = food;

    cout << food << endl;
    cout << meal;

    return 0;
}