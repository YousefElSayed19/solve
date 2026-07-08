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
    string s;
    cin>>s;
    ll sum =0;
    for(int i = 0;i<s.size();i++){
        if((s[i]-'0')%2!=0){
            sum+=s[i]-'0';
        }
    }
    cout<<sum<<endl;
}
int main()
{
    io_st();
    solve();
}