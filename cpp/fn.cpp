#include <iostream>
#include <utility>
using namespace std;

pair<int, int> twoSum(int n[], int tg)
{
    int len = 4;
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (n[i] + n[j] == tg && n[i] != n[j])
            {
                return {i, j};
            }
        }
    }
    return {-1, -1};
}

int main()
{
    int nums[4] = {2, 5, 6, 9};
    int tg = 8;

    pair<int, int> result = twoSum(nums, tg);

    if (result.first != -1 && result.second != -1)
    {
        cout << "Indices: " << result.first << ", " << result.second << endl;
    }
    else
    {
        cout << "No solution found." << endl;
    }

    return 0;
}
