#include<iostream>
using namespace std;

// Multilevel inheritace
class MyClass {
    public:
    void cont()
    {
        cout << "Some Content in parent classs";
    }
};

class MyChild: public MyClass {
};

class MyGrandChild: public MyChild {};

int main()
{
    MyGrandChild myObj;
    myObj.cont();

    return 0;
}