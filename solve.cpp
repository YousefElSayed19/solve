#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void io_st()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 
}
void solve()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        bool ok = false;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            if (x == 67) ok = true;
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
}
int main()
{
    io_st();
    solve();
}