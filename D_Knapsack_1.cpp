#include <bits/stdc++.h>
using namespace std;
#define pp pair<int,int>
#define ll long long

void solve() {
    ll n,w; cin >> n >> w;
	vector<ll>wt(n+1),v(n+1); for(int i=0;i<n;i++) cin >> wt[i] >> v[i];
    vector<vector<ll>>dp(n+1, vector<ll>(w+1));
    for(int i=1;i<=n;i++)  {
        for(int j=0;j<=w;j++) {
            if(i==0||j==0) {
                dp[i][j]=0;
            }
            if(wt[i-1]<=j) {
                dp[i][j]=max(v[i-1]+dp[i-1][j-wt[i-1]], dp[i-1][j]);
            }
            else {
                dp[i][j]=dp[i-1][j];
            }
        }

    }
    cout << dp[n][w] << endl;

 
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // ll t;
    // std::cin >> t;

    // while (t--) {
        solve();
    // }
    return 0;
}


// LUOGU_RID: 121457009
// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// const int maxn=1e5+10;
// int n,m,v[maxn],w[maxn],f[maxn];
// signed main()
// {
//     scanf("%lld%lld",&n,&m);
//     for(int i=1;i<=n;i++)
//         scanf("%lld%lld",&w[i],&v[i]);
//     for(int i=1;i<=n;i++)
//         for(int j=m;j>=w[i];j--)
//             f[j]=max(f[j],f[j-w[i]]+v[i]);
//     printf("%lld",f[m]);
//     return 0;
// }