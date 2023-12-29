#include <iostream>
using namespace std;

class MyClass
{
public:
    int myAge;
    string myName;
};

int main()
{
    MyClass myObj;

    myObj.myName = "Oli";
    myObj.myAge = 27;

    cout << myObj.myAge << endl;
    cout << myObj.myName << endl;

    return 0;
}