#include <iostream>
#include <string>
#include <algorithm>
// #include <bits/stdc++.h>

using namespace std;

// Function to convert a string to lowercase
string toLowerCase(string s)
{
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}

int main()
{

    string str1, str2;

    cin >> str1 >> str2;

    // Compare between two strings with compare() function
    int res = toLowerCase(str1).compare(toLowerCase(str2));

    cout << res << endl;

    return 0;
}
