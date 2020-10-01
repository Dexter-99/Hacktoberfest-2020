#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
  int oddCells(int n, int m, vector<vector<int>> &indices)
  {
    int a[n][m];
    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++)
        a[i][j] = 0;
    for (int i = 0; i < indices.size(); i++)
    {
      for (int j = 0; j < m; j++)
      {
        a[indices[i][0]][j]++;
      }
      for (int j = 0; j < n; j++)
      {
        a[j][indices[i][1]]++;
      }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++)
        if (a[i][j] % 2)
          count++;
    return count;
  }
};