#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n, n_shop;
    cin >> n >> n_shop;
    int price, quantity, fee;
    vector<vector<int>> arr(n_shop+1,vector<int>(3,0));
    for(int i = 0; i < n_shop; i++){
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }

    vector<vector<int>> dp(n_shop+1, vector<int>(n+1,INT_MAX));
    dp[0][0] = 0;

    for (int i = 1; i <= n_shop; i++) {
       
        quantity = arr[i-1][0], price = arr[i-1][1], fee = arr[i-1][2];
        for (int j = 0; j <= n; ++j) {
            dp[i][j] = dp[i - 1][j];
            for (int k = 1; k <= min(j, quantity); ++k) {
                dp[i][j] = min(dp[i][j], dp[i][j - k] + price * k + fee);
            }
        }
    }

    for(int i = 1; i <= n_shop; i++){
        for(int j = 0; j <= n ; j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    cout << dp[n_shop][n];
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//#ifndef ONLINE_JUDGE
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//#endif

    // ll test=1;
    // cin>>test;
    // while(test--)
    // {
        solve();
    // }
    return 0;
}
