#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll i = 0;
        ll *a = new ll[n + 1];
        for (int i = 0; i <= n; i++)
        {
            a[i] = 0;
        }
        string str;
        ll temp;
        i = 0;
        while (i < n)
        {
            cin >> str;
            // cout << str << endl;
            cin >> temp;
            a[temp]++;
            i++;
        }
        ll curr = 1;
        ll badness = 0;

        for (int i = 1; i <= n; i++)
        {
            while (a[i])
            {
                badness += abs(i - curr);
                curr++;
                a[i]--;
            }
        }
        cout << badness << '\n';
    }

    return 0;
}