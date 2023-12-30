#include<iostream>
using namespace std;

class Car {
    public:
    int maxSpeed(int speed){
        return speed;
    }
};

int main()
{
    Car car1;

    cout << car1.maxSpeed(332);

    return 0;
}
