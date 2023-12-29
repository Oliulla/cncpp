#include <iostream>
using namespace std;

int main()
{
    // We put "1" to indicate there is a ship.
    bool ships[4][4] = {
        {0, 1, 1, 0},
        {0, 0, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 1, 0}};

    int hits = 0, turns = 0;

    while (hits < 4)
    {
        int row, column;

        cout << "Selecting coordinates" << endl;

        cout << "Choose a row number between 0 and 3: ";
        cin >> row;

        cout << "Choose a column number between 0 and 3: ";
        cin >> column;

        if (ships[row][column])
        {
            ships[row][column] = 0;
            hits++;
            cout << "Hit! " << 4 - hits << " left.\n\n";
        }
        else
        {
            cout << "Miss!!!" << endl;
        }

        turns++;
    }

    cout << "Victory!" << endl;
    cout << "You won in " << turns << " turns";
}