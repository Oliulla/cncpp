#include <iostream>
using namespace std;

class MyClass
{
public:
    MyClass()
    {
        cout << "Hello constructors!!!";
    }
};

int
main()
{

    MyClass myObj;

    return 0;
}