#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(n < 2){
        cout << "NO" << endl;
    }
    else{
        if(s == "10"){
            cout << "NO" << endl;
        }
        else{
            int c1 = 0;
            for(int i = 0; i < n; i++){
                if(s[i] == '1'){
                    c1++;
                }
            }
            if(c1 == 1 || c1 == 2 || c1 == 3){
                    cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
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
