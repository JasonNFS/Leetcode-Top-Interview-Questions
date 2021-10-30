#ifndef LEETCODE_TOP_QUESTIONS_NUM54_H
#define LEETCODE_TOP_QUESTIONS_NUM54_H
#include "leetcode.hpp"
#include <algorithm>
#include <vector>
using namespace std;
namespace num54 {
class Solution
{
private:
  using Sz = typename vector<int>::size_type;
  using Point = pair<Sz, Sz>;


public:
  vector<int> spiralOrder(vector<vector<int>> &matrix)
  {
    const auto row_count{ matrix.size() };
    assert(row_count != 0);
    const auto columns_count{ matrix[0].size() };
    assert(columns_count != 0);
    vector<int> ans;
    travel(ans, { 0, 0 }, row_count, columns_count, matrix);
    return ans;
  }

private:
  void travel(vector<int> &ans, Point start, Sz h, Sz w, vector<vector<int>> &matrix)
  {
    assert(h > 0 && w > 0);
    const auto x0 = start.first, y0 = start.second;
    ans.insert(end(ans), matrix[x0].begin() + y0, matrix[x0].begin() + y0 + w);
    if (h == 1)
      return;
    for (Sz i = 1; i < h - 1; ++i)
      ans.push_back(matrix[x0 + i][y0 + w - 1]);
    ans.insert(end(ans), matrix[x0 + h - 1].rend() - w, matrix[x0 + h - 1].rend());
    if (w == 1)
      return;
    for (Sz i = h - 2; i > 0; --i)
      ans.push_back(matrix[x0 + i][y0]);
    if (h - 2 <= 0 || w - 2 <= 0)
      return;
    travel(ans, { start.first + 1, start.second + 1 }, h - 2, w - 2, matrix);
  }
};
}// namespace num54

#endif// LEETCODE_TOP_QUESTIONS_NUM54_H
