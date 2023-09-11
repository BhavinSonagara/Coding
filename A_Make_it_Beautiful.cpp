#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    if(arr[0] == arr[n-1]){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
        cout << arr[n-1] << " " << arr[0] << " " ;
        for(int i = 1; i < n-1; i++){
            cout << arr[i] << " ";
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
