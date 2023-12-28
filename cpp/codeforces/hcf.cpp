#include <iostream>
using namespace std;

int main()
{
    int hcf = 1;
    int x, y, z, sn;

    cin >> x;
    cin >> y;
    cin >> z;

    // if (x < y)
    // {
    //     sn = x;
    // }
    // else if (y < z)
    // {
    //     sn = y;
    // }
    // else if (z < x)
    // {
    //     sn = z;
    // }

    sn = (x < y) ? x : (y < z) ? y : z;
    // cout << sn;

    for (int i = 1; i <= sn; i++)
    {
        if (x % i == 0 && y % i == 0 && z % i == 0)
        {
            hcf = i;
        }
    }

    cout << endl
         << hcf;

    return 0;
}