#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
  vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
  {
    vector<bool> v;
    int MAX = -1;
    int n = candies.size();
    for (int i = 0; i < n; i++)
      MAX = max(candies[i], MAX);
    for (int i = 0; i < n; i++)
    {
      if (candies[i] + extraCandies >= MAX)
        v.push_back(true);
      else
        v.push_back(false);
    }
    return v;
  }
};