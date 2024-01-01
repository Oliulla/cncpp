#include<iostream>
using namespace std;

class Vehicle {
    public:
    string brand = "BMW";
    void honk()
    {
        cout << "Tut, tut!! \n";
    }
};

class Car: public Vehicle{
    public:
    string model = "X6";

};


int main()
{
    Car carObj;

    carObj.honk();
    cout << carObj.brand << " " << carObj.model;

    return 0;
}