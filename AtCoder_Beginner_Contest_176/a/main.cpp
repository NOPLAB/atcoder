#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n, x, t;
    cin >> n >> x >> t;
    int c;
    c = n / x;
    if (n % x != 0)
        c++;

    cout << c * t << endl;
    return 0;
}