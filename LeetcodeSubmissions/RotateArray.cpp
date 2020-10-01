#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
  void rotate(vector<int> &nums, int k)
  {
    int n = nums.size();
    k %= n;

    reverse(nums, 0, n - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, n - 1);
  }
  void reverse(vector<int> &nums, int low, int high)
  {
    while (low < high)
    {
      swap(nums[low], nums[high]);
      low++;
      high--;
    }
  }
};