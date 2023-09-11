#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll sum = 0;
    for(ll i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i] > 0 ? arr[i] : -arr[i];
    }
    ll count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] < 0){
            count++;
            while(i < n && (arr[i] < 0 || arr[i] == 0))i++;
        }
      //  while(i < n && (arr[i] < 0 || arr[i] == 0))i++;
    }

    cout << sum << " " << count << endl; 
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
