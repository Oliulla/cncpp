#include <iostream>
using namespace std;

// Encapsulation
// getter and setter

class Car {
    private:
    string brand;
    string model;
    int year;

    public:
    // setter
    void carSetter(string x, string y, int z) {
        brand = x;
        model = y;
        year = z;
    }

    // Getter
    string carGetter() {
        return brand + " " + model + " " + to_string(year);
    }
};

int main()
{

    Car carObj;
    carObj.carSetter("BMW", "X7", 2838);
    cout << carObj.carGetter();


    return 0;

}