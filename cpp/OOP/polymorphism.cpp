#include <iostream>
using namespace std;

class Animal
{
public:
    void makeSound()
    {
        cout << "The animal make sound \n";
    }
};

class Cat : public Animal
{
public:
    void makeSound()
    {
        cout << "The cat make sound : meow meow\n";
    }
};

class Dog : public Animal
{
public:
    void makeSound()
    {
        cout << "The dog make sound like bow wow\n";
    }
};

int
main()
{
    Animal myAnimal;
    Cat myCat;
    Dog myDog;

    myAnimal.makeSound();
    myCat.makeSound();
    myDog.makeSound();

    return 0;
}