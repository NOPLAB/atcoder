#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main()
{
    char S, T;
    cin >> S;
    cin >> T;

    if (S == 'Y') {
        switch (T)
        {
        case 'a':
            cout << 'A' << endl;
            break;
        case 'b':
            cout << 'B' << endl;
            break;
        case 'c':
            cout << 'C' << endl;
            break;
        default:
            break;
        }
    }
    else cout << T << endl;
    return 0;
}