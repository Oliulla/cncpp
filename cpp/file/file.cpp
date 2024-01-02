#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream MyFile("file.txt");

    MyFile << "Something";

    MyFile.close();

    string myText;

    ifstream MyReadFile("file.txt");

    while (getline(MyReadFile, myText))
    {
        cout << myText;
    }

    return 0;
}