#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int nxt_rnd = 0;
    int participants[n];

    for (int i = 0; i < n; ++i) {
        cin >> participants[i];
    }

    for (int i = 0; i < n; ++i) {
        if (participants[i] >= participants[k - 1] && participants[i] > 0) {
            nxt_rnd++;
        }
    }

    cout << nxt_rnd << endl;

    return 0;
}
