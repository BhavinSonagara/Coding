#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n, m, a[50], b[50];
    long long sumA = 0, sumB = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> a[i], sumA += a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i], sumB += b[i];
    if (sumA > sumB)
        cout << "Tsondu\n";
    if (sumA < sumB)
        cout << "Tenzing\n";
    if (sumA == sumB)
        cout << "Draw\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // #ifndef ONLINE_JUDGE
    //	freopen("input.txt", "r", stdin);
    //	freopen("output.txt", "w", stdout);
    // #endif

    ll test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
