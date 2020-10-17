#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main()
{
    string S;
    cin >> S;
    if (S[S.size() - 1] == 's') {
        S += "es";
    } else {
        S += "s";
    }
    cout << S;
    return 0;
}