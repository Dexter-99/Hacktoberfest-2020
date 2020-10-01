#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
  int findMaxConsecutiveOnes(vector<int> &nums)
  {
    int res = 0;
    int curr = 0;
    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[i])
      {
        curr++;
        res = max(res, curr);
      }
      else
      {

        curr = 0;
      }
    }
    return res;
  }
};