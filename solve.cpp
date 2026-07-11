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
    ll n;cin>>n;
    int c= 0;
    if(n%5!=0){
        cout<<"NO"<<endl;
        return ;
    }else{
        if(n>=15){
            c+=n/15;
            n%=15;
        }
        if(n>=5){
            c++;
        }
    }
    cout<<c<<endl;
}
int main()
{
    io_st();
    solve();
}