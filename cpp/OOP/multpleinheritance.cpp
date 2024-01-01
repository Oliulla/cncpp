#include<iostream>
using namespace std;

class MyClass {
    public:
    void myContent()
    {
        cout << "My class content" << endl;
    }
};

class MyChild {
    public:
    void myChildContent()
    {
        cout << "My Child class content";
    }
};

class MyGrandChild: public MyClass, public MyChild {};

int main()
{
    MyGrandChild myObj;
    myObj.myContent();
    myObj.myChildContent();

    return 0;
}