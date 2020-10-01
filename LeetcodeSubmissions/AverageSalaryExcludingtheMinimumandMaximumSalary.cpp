#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
  double average(vector<int> &a)
  {
    int MAX = INT32_MIN, MIN = INT32_MAX;
    double sum = 0;
    for (int i = 0; i < a.size(); i++)
    {
      MAX = max(MAX, a[i]);
      MIN = min(MIN, a[i]);
      sum += a[i];
    }
    sum = sum - MAX - MIN;
    return sum / (a.size() - 2);
  }
};