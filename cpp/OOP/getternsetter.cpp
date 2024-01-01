#include<iostream>
using namespace std;


class Employee {
    private:
    int salary;


    public:
    void setter(int s)
    {
        salary = s;
    }

    int getter() 
    {
        return salary;
    }
};


int main()
{
    Employee emplObj;
    emplObj.setter(373737);
    int result = emplObj.getter();
    cout << result << endl;

    return 0;
}