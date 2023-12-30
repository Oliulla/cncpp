#include <iostream>
using namespace std;

class Car
{
public:
    int speed(int maxSpeed);
};

int Car::speed(int maxSpeed)
{
    return maxSpeed;
}

int main()
{
    Car car1;

    cout << car1.speed(300);

    return 0;
}