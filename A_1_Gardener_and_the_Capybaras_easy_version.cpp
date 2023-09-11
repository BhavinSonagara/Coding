#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string s;
    cin >> s;
    if(s[1]=='a') cout<<s[0]<<' '<<s[1]<<' '<<s.substr(2,s.size()-2)<<endl;
	else cout<<s[0]<<' '<<s.substr(1,s.size()-2)<<' '<<s[s.size()-1]<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//#ifndef ONLINE_JUDGE
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//#endif

    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
aaab