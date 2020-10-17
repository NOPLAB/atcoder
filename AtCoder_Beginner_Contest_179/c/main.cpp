#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int N;
    cin >> N;
    int check = 0;
    for (int a = 1; a <= N; a++) {
        for (int b = 1; b <= N; b++) {
            for (int c = 1; c <= N; c++) {
                if (a * b + c == N) check++;
            }
        }
    }
    cout << check << endl;
    return 0;
}