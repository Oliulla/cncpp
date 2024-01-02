#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int implProbs = 0;
    int x, y, z;

    for (int i = 1; i <= n; i++)
    {
        cin >> x >> y >> z;
        if(x+y+z > 1){
            implProbs++;
        }
    }

    cout << implProbs;


    return 0;
}