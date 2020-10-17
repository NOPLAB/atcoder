#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main()
{
    ll A, B, C, D;
    cin >> A >> B >> C >> D;
    if (A <= D && B >= C && C <= B && D >= A) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}