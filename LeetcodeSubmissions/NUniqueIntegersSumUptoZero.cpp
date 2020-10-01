#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
  vector<int> sumZero(int n)
  {
    int val = 0;
    vector<int> v;
    if (n % 2)
    {
      v.push_back(val);
      n--;
    }
    val -= (n / 2);
    while (n--)
    {
      if (val == 0)
        val++;
      v.push_back(val++);
    }

    return v;
  }
};