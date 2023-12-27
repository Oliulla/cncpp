#include <iostream>
#include <string>
using namespace std;

int main()
{
    // string letters[7][4] = {
    // {"A", "B", "C", "D"},
    // {"E", "F", "G", "H"},
    // {"I", "J", "K", "L"},
    // {"M", "N", "O", "P"},
    // {"Q", "R", "S", "T"},
    // {"U", "V", "W", "X"},
    // {"Y", "Z"}};

    string letters[2][2][2] = {
        {{"A", "B"},
         {"C", "D"}},
        {{"E", "F"},
         {"G", "H"}}

    };

    int numRows = sizeof(letters[0]) / sizeof(letters[0][0]);
    int numCols = sizeof(letters[0][0]) / sizeof(letters[0][0][0]);
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numCols; j++)
        {
            for (int k = 0; k < numCols; k++)
            {
                cout << letters[i][j][k] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
