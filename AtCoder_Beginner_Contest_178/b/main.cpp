#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << max(max(a * c, a * d), max(b * c, b * d)) << endl;

    return 0;
}