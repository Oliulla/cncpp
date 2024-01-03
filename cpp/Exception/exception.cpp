#include <iostream>
using namespace std;

int main()
{

    try
    {
        int age;
        cin >> age;
        if (age > 17)
        {
            cout << "Your are able to vote.";
        }
        else
        {
            throw 505;
        }
    }
    catch (int n)
    {
        cout << "Yor'e not able to vote!" << endl;
        cout << n;
    }

    return 0;
}