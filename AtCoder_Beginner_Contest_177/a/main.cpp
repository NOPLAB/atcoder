#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int D, T, S;
    cin >> D >> T >> S;
    if (S * T >= D) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}