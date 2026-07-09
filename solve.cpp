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
    int a,b;cin>>a>>b;
    int c= 0 ;
    while(a<=b){
        a*=3;
        b*=2;
        c++;
    }
    cout<<c<<endl;
}
int main()
{
    io_st();
    solve();
}