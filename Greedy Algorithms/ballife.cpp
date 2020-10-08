#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    while (1)
    {
        int n;
        cin >> n;
        if (n == -1)
        {
            break;
        }
        int *a = new int[n];
        int i = 0;
        int temp;
        while (i < n)
        {
            cin >> temp;
            a[i] = temp;
            i++;
        }
        ll sum = accumulate(a, a + n, 0);
        if (sum % n)
        {
            cout << -1 << endl;
        }
        else
        {
            ll avg = sum / n;
            ll curr = 0;
            ll ans = INT_MIN;
            for (int i = 0; i < n - 1; i++)
            {
                ans = max(ans, abs(curr + a[i] - (avg * (i + 1))));
                curr += a[i];
            }
            cout << ans << endl;
        }
    }

    return 0;
}