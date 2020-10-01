#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
  int maxSubArray(vector<int> &nums)
  {
    int n = nums.size();
    int maxSub = nums[0];
    int res = nums[0];
    for (int i = 1; i < n; i++)
    {
      maxSub = max(maxSub + nums[i], nums[i]);
      res = max(maxSub, res);
    }
    return res;
  }
};