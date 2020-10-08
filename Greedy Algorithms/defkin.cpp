#include <iostream>
#include <climits>
#include <algorithm>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w, h, n;
        cin >> w >> h >> n;
        if (n == 0)
        {
            ll ans1 = w * h;
            cout << ans1 << '\n';
        }
        else
        {
            int *x = new int[n];
            int *y = new int[n];
            int i = 0;
            int temp1, temp2;
            while (i < n)
            {
                cin >> temp1 >> temp2;
                x[i] = temp1;
                y[i] = temp2;
                i++;
            }
            int max1 = INT_MIN;
            int max2 = INT_MIN;
            sort(x, x + n);
            sort(y, y + n);
            for (i = 1; i < n; i++)
            {
                max1 = max(max1, x[i] - x[i - 1] - 1);
                max2 = max(max2, y[i] - y[i - 1] - 1);
            }
            max1 = max(max1, w - x[n - 1]);
            max1 = max(max1, x[0] - 1);
            max2 = max(max2, h - y[n - 1]);
            max2 = max(max2, y[0] - 1);
            ll ans = max1 * max2;
            cout << ans << endl;
        }
    }

    return 0;
}