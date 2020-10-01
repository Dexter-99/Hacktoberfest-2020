#include <iostream>
using namespace std;
class Solution
{
public:
  int removeElement(vector<int> &v, int val)
  {
    v.erase(remove(v.begin(), v.end(), val), v.end());
    return v.size();
  }
};