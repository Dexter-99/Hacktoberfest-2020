#include <bits/stdc++.h>
using namespace std;
int compare(pair<int, int> a, pair<int, int> b)
{

    return a.second < b.second ? 1 : 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> a;
        int i = 0;
        int start, end;
        while (i < n)
        {
            cin >> start >> end;
            pair<int, int> temp = make_pair(start, end);
            a.push_back(temp);
            i++;
        }
        sort(a.begin(), a.end(), compare);
        int count = 1;
        pair<int, int> curr = a[0];
        i = 1;
        while (i < n)
        {
            if (a[i].first >= curr.second)
            {
                count++;
                curr = a[i];
            }
            i++;
        }
        cout << count << '\n';
    }
}