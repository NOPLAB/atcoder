#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int N;
    cin >> N;
    vector<vector<int>> D(N, vector<int>(2));
    rep (i, N) {
        cin >> D.at(i).at(0) >> D.at(i).at(1);
    }
    bool check[N];
    rep (i, N) {
        check[i] = false;
    }
    rep (i, N) {
        if (D.at(i).at(0) == D.at(i).at(1)) check[i] = true;
    }
    bool out = false;
    rep (i, N - 2) {
        if (check[i] == true && check[i + 1] == true && check[i + 2] == true) {
            out = true;
        }
    }
    if (out) cout << "Yes"; else cout << "No";
    return 0;
}