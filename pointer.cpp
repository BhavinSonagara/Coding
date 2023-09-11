#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int arr[5] = {1,2,3,4,5};
    cout << arr << " " << endl;
   // cout << *(arr + 1) << endl;
    cout << &arr << " " << endl;
  //  cout << &arr + 1 << endl; 
    cout << (&arr + 1) << endl;
    cout << *(&arr + 1) - arr<< endl;
    cout << (&arr + 1) - &arr<< endl;
    //228 208

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
