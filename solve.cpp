#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void io_st()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}
void solve()
{
    long long n;
    cin >> n;

    if (n <= 1) {
        cout << "NO";
        return ;
    }

    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            cout << "NO";
            return ;
        }
    }

    cout << "YES";
}
int main()
{
    io_st();
    solve();
}