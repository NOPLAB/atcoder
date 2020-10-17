#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int A, B;
    cin >> A >> B;
    int X, Y;
    Y = (A - B) / 2;
    X = A - Y;
    cout << X << ' ' << Y << endl;
    return 0;
}