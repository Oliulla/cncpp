#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int x = 0;

    for (int i = 1; i <= n; i++)
    {
        string oprtr;
        cin >> oprtr;

        if (oprtr[0] == '+' || oprtr[1] == '+')
        {
            ++x;
        }
        else
        {
            --x;
        }
    }

    cout << x << endl;

    return 0;
}