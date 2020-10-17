#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main()
{
    ll N;
    cin >> N;
    ll a[N];
    rep (i, N) {
        cin >> a[i];
    }

    ll max = 0, min = 0;
    while(true) {
        max = 0;
        min = 0;
        rep (i, N) {
            if (max < a[i]) max = a[i];
            if (min > a[i]) min = a[i];
        }
        if (max = min) {
            cout << a[0] << endl;
            exit;
        }
        else
        {
            rep (i, N) {
                if (max == a[i]) a[i] = max - min;
            }
        }
    }

    return 0;
}