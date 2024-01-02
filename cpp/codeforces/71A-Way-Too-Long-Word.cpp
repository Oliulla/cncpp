// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         string s;
//         cin >> s;
//         int len = s.length();
//         int abbrLen = len - 2;
//         char f = s[0];
//         char l = s[s.length() - 1];

//         if (len < 10)
//         {
//             cout << s;
//         }
//         else
//         {
//             cout << f << abbrLen << l;
//         }
//     }

//     return 0;
// }

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string word;
        cin >> word;

        if (word.length() > 10) {
            cout << word[0] << word.length() - 2 << word.back() << endl;
        } else {
            cout << word << endl;
        }
    }

    return 0;
}
