#include <iostream>
using namespace std;
class Solution
{
public:
  int xorOperation(int n, int start)
  {
    int res = 0;
    for (int i = 0; i < n; i++)
    {
      int val = start + 2 * i;
      res ^= val;
    }
    return res;
  }
};