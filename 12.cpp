#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

map<int,int> mp;

void solve()
{
    // map<int, int> mp;
    // for(int i = 0; i < 32 ; i++){
    //     for(int j = 0; j < 32; j++){
    //         if(i!=j)
    //             mp[pow(2,i) + pow(2,j)]++;
    //     }
    // }
    int n; 
    cin >> n;
    int ans = INT_MAX;
    for(auto x : mp){
        cout << "1";
        ans = min(ans, abs(x.first - n));
    }
    cout << ans << endl;
	//change required 
}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//#ifndef ONLINE_JUDGE
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//#endif
    map<int, int> mp;
    for(int i = 0; i < 32 ; i++){
        for(int j = 0; j < 32; j++){
            if(i!=j)
                mp[pow(2,i) + pow(2,j)]++;
        }
    }
	cout << mp[10];
    int test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
