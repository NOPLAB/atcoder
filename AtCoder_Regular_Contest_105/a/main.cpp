#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main()
{
    ll A, B, C, D;
    cin >> A >> B >> C >> D;
    bool ans = false;
    if (A + B == C + D) ans = true;
    if (A + C == B + D) ans = true;
    if (A + D == B + C) ans = true;
    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}