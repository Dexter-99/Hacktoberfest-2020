#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int *a = new int[n];
        int i = 0;
        int temp;
        while (i < n)
        {
            cin >> temp;
            a[i] = temp;
            i++;
        }
        int elem1 = INT_MIN;
        int count1 = 0;
        int elem2 = INT_MIN;
        int count2 = 0;
        i = 0;
        for (i = 0; i < n; i++)
        {
            if (elem1 == a[i])
            {
                count1++;
            }
            else if (elem2 == a[i])
            {
                count2++;
            }
            else if (count1 == 0)
            {
                elem1 = a[i];
                count1 = 1;
            }
            else if (count2 == 0)
            {
                elem2 = a[i];
                count2 = 0;
            }
            else
            {
                count1--;
                count2--;
            }
        }
        count1 = 0;
        count2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == elem1)
            {
                count1++;
            }
            else if (a[i] == elem2)
            {
                count2++;
            }
        }
        if (count1 > (n / 2))
            cout << elem1 << '\n';
        else if (count2 > (n / 2))
            cout << elem2 << '\n';
    }
    return 0;
}