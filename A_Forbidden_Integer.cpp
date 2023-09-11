#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int x, k, n; cin >> n >> k >> x;
		if(x!=1){
			cout << "YES\n";
			cout << n << '\n';
			for(int i = 1; i <= n; i++) cout << 1 << " ";
			cout << '\n';
		}
		else if((n%2 && k==2) || k==1) cout << "NO\n";
		else{
			cout << "YES\n";
			cout << n/2 << '\n';
			for(int i = 1; i < n/2; i++) cout << 2 << " ";
			cout << 2+(n%2) << '\n';
		}
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
