#include <iostream>
using namespace std;

int main()
{
    struct
    {
        string brand;
        string model;
        int year;
    } myStructure;

    myStructure.brand = "BMW";
    myStructure.model = "X5";
    myStructure.year = 1998;

    // cout << myStructure.brand << endl
    //      << myStructure.model << endl
    //      << myStructure.year;

    struct myStructure2
    {
        string userName = "ab23";
        string gmail = "ab@gmail.com";
        int age = 32;
        bool isPremimum = 1;
    };

    myStructure2 user;

    cout << "User Name : " << user.userName << "\n"
         << "User Email : " << user.gmail << "\n"
         << "User Age : " << user.age << "\n"
         << "User Status : " << user.isPremimum;

    return 0;
}