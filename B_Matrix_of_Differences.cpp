#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    int l = 1;
    int r = n*n;
    int t = 0;
    vector<vector<int> > v(n,vector<int>(n));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(t) v[i][j] = r--;
            else v[i][j] = l++;
            t ^= 1; 
        }
        if(i & 1) reverse(v[i].begin(), v[i].end());
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << v[i][j] << " "; 
        }
        cout << endl;
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
