#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
  int removeDuplicates(vector<int> &nums)
  {
    int res = 1;
    int n = nums.size();
    if (n == 0)
      return 0;
    for (int i = 1; i < n; i++)
    {
      if (nums[res - 1] != nums[i])
      {
        nums[res] = nums[i];
        res++;
      }
    }
    return res;
  }
};