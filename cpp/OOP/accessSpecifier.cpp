#include <iostream>
using namespace std;

class Employee
{
protected:
    int salary;
};

class Programmer : public Employee
{
public:
    int bonous;

    void setter(int s, int b)
    {
        salary = s;
        bonous = b;
    }

    void totalMoney()
    {
        cout << "Total money is : " << salary + bonous << endl;
    }

    int getter()
    {
        return salary;
    }
};

int main()
{
    Programmer progObj;
    // progObj.salary(6332);
    // progObj.bonous(383);
    progObj.setter(2331, 100);
    cout << "Salary : " << progObj.getter() << endl;
    cout << "Bonous : " << progObj.bonous << endl;
    progObj.totalMoney();
    

    return 0;
}