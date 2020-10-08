#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int main()
{
    int n, d;
    cin >> n >> d;
    int *a = new int[n];
    int i = 0;
    int temp;
    while (i < n)
    {
        cin >> temp;
        a[i] = temp;
        i++;
    }
    sort(a, a + n);
    int ans = 0;
    for (i = 0; i < n - 1; s)
    {
        if (a[i + 1] - a[i] <= d)
        {
            ans++;
            i += 2;
        }
        else
        {
            i++;
        }
    }
    cout << ans << '\n';

    return 0;
}