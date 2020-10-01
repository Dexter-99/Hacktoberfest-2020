#include <vector>
using namespace std;
class Solution
{
public:
  int removeDuplicates(vector<int> &nums)
  {
    if (nums.size() == 0)
      return 0;
    int res = 1;
    int count = 1;
    for (int i = 1; i < nums.size(); i++)
    {
      if (nums[res - 1] == nums[i])
      {
        count += 1;
        if (count <= 2)
        {
          nums[res] = nums[i];
          res++;
        }
      }
      else
      {
        nums[res] = nums[i];
        res++;
        count = 1;
      }
    }

    return res;
  }
};