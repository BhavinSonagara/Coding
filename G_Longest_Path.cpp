#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int dfs(int node, vector<int> adj[], vector<int> &vis, vector<int> &path ){
    vis[node] = 1;
    int maxi = -1;
    for(int it : adj[node]){
        if(!vis[it]){
            maxi = max(maxi, dfs(it,adj,vis,path));
        }
        else{
            maxi = max(maxi, path[it]);
        }
    }
    return path[node] = 1 + maxi;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> adj[n+1];
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    vector<int> vis(n+1, 0), path(n+1, 0);
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            dfs(i, adj, vis, path);
        }
    }
    int ans = 0;
    for(int i = 0; i <= n ; i++){
        ans = max(ans, path[i]);
    }
    cout << ans << " ";

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
