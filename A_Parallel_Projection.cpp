#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int a,b,f,g,w,d,h;
    cin>>w>>d>>h>>a>>b>>f>>g;
	cout<<min(min(a+f,2*w-a-f)+abs(b-g),min(b+g,2*d-b-g)+abs(a-f))+h<<endl;
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
