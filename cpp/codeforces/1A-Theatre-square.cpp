#include <iostream>
using namespace std;

int main()
{
    int n, m, a, ndStn = 1;

    cin >> n >> m >> a;

    int areaSqr = n * m;
    int areaStn = a * a;

    int sm = (areaStn < areaSqr) ? areaStn : areaSqr;

    for (int i = 1; i <= sm; i++)
    {
        if (areaSqr % i == 0 && areaStn % i == 0)
        {
            ndStn = i;
        }
    }

    cout << ndStn;
}