#ifndef LEETCODE_TOP_QUESTIONS_NUM238_H
#define LEETCODE_TOP_QUESTIONS_NUM238_H
using namespace std;
namespace num238 {
class Solution
{
public:
  vector<int> productExceptSelf(vector<int> &nums)
  {
    const int n = static_cast<int>(nums.size());
    assert(n >= 2);

    vector product_from_left = nums;
    auto &product_from_right{ nums };

    for (int i = n - 2; i > 0; --i) {
      product_from_right[i] *= product_from_right[i + 1];
    }
    for (int i = 1; i < n; ++i) {
      product_from_left[i] *= product_from_left[i - 1];
    }
    /// from n-1 to 0, we will update product_from_left into final result.
    product_from_left[n - 1] = product_from_left[n - 2];
    for (int i = n - 2; i >= 1; --i) {
      product_from_left[i] = product_from_left[i - 1] * product_from_right[i + 1];
    }
    product_from_left[0] = product_from_right[1];
    return product_from_left;
  }
};
}// namespace num238


#endif// LEETCODE_TOP_QUESTIONS_NUM238_H
