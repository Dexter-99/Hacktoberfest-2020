#include<iostream>
#include<vector>
using namespace std;
class Solution
{
public:
  vector<int> replaceElements(vector<int> &arr)
  {
    int curr = -1;
    int _max = -1;
    for (int i = arr.size() - 1; i >= 0; i--)
    {
      _max = max(_max, arr[i]);
      arr[i] = curr;
      curr = _max;
    }
    return arr;
  }
};