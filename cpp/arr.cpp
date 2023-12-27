#include <iostream>
#include <string>
#include<array> 

using namespace std;

int main()
{
    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};

    for (string car : cars)
    {
        cout << car << "\n";
    }

    cout << "----------------------------- \n";


    int len = sizeof(cars) / sizeof(int);

    for (int i = 0; i < len; i++)
    {
        cout << cars[i] << endl;
    }

    return 0;
}