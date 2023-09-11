#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n, m, k, l ,r;
    cin >> n >> m >> k >> l >> r;
    vector<vector<int>> v;

    for(int i = 0; i < n; i++) {
        int c, p;
        cin >> c >> p;
        for(int j = 0; j < m; j++) {
            if(c < k-1) c++;
            else if(c > k-1) c--;
            else c = k;
        }
        v.push_back({p ,c});
    }

    sort(v.begin(), v.end());
    bool is = true;
    for(auto it : v){
        if(it[1] >= l && it[1] <= r){
            cout << it[0] << endl;
            is = false;
            break;
        }
    }

    if(is)
        cout << -1 << endl;
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
