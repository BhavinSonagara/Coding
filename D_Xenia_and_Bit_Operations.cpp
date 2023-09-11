#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void build(int idx, int low, int high, int seg[], int arr[], int orr){
    if(low == high){
        seg[idx] = arr[low];
        return;
    }
    int mid = (high + low) / 2;
    build(2*idx + 1, low, mid, seg, arr, !orr);
    build(2*idx + 2, mid + 1, high, seg, arr, !orr);
    if(orr) {
        seg[idx] = seg[2*idx + 1] | seg[2*idx + 2];
    }
    else{
        seg[idx] = seg[2*idx + 1] ^ seg[2*idx + 2];
    }
}

void update(int idx, int low, int high, int seg[], int orr, int i, int val){
    if(low == high){
        seg[idx] = val;
        return;
    }
    int mid = (high + low) / 2;
    if(i <= mid)
        update(2*idx + 1, low, mid, seg,!orr,i,val);
    else
        update(2*idx + 2, mid + 1, high, seg,!orr, i,val);

    if(orr) {
        seg[idx] = seg[2*idx + 1] | seg[2*idx + 2];
    }
    else{
        seg[idx] = seg[2*idx + 1] ^ seg[2*idx + 2];
    }
}
void solve()
{
    int n , m;
    cin >> n >> m;
    int el = pow(2, n);
    int arr[el];
    for(int i = 0; i < el; i++){
        cin >> arr[i];
    }
    int seg[4 * el];
    if(n % 2 == 0){
        build(0,0,el-1,seg,arr, 0);
    }
    else{
        build(0,0,el-1,seg,arr, 1);
    }
    while(m--){
        int i, val;
        cin >> i >> val;
        i--;
        if(n % 2 == 0){
            update(0,0,el-1,seg,0,i, val);
        }
        else{
            update(0,0,el-1,seg,1,i, val);
        }
        cout << seg[0] << endl;
    }
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
    //}
    return 0;
}

// 0
// 1
// 0
