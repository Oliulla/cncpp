#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 2; i++)
    {
        cout << "Outer : " << i << "\n";

        for (int j = 1; j <= 5; j++)
        {
            cout << "\tInner : " << j << "\n";
        }
    }
    return 0;
}