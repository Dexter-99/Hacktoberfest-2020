#include <iostream>
#include <algorithm>
using namespace std;
void getResult(int *a, int n, int amount)
{
    int temp = amount;
    int changes = 0;
    while (temp > 0)
    {
        int t = upper_bound(a, a + n, temp) - 1 - a;
        changes++;
        cout << a[t] << " ";
        temp -= a[t];
    }
    cout << endl;
    cout << "Total Coins Are  " << changes << endl;
}
int main()
{
    int a[] = {1, 2, 5, 10, 20, 50, 100, 500, 2000};
    int n = sizeof(a) / sizeof(a[0]);
    int amount;
    cin >> amount;
    cout << "Coin Changes Are As Follows:" << endl;
    getResult(a, n, amount);
    return 0;
}
