#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    ll ans = INT_MAX;
    for (ll i = 1; i * i <= n; i++)
    {
        ans = min(ans, ((i - 1) + ((n - i) + i - 1) / i));
    }
    cout << ans << endl;
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}