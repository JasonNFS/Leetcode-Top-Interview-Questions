#include "gtest/gtest.h"
#include <vector>
#include "num54.hpp"
using namespace std;
using namespace num54;
TEST(num54, test1)
{
  Solution sl;
  vector<vector<int>> m1{
    { 1, 2, 3, 4 },
    { 5, 6, 7, 8 },
    { 9, 10, 11, 12 }
  };
  EXPECT_EQ(sl.spiralOrder(m1), (vector<int>{ 1, 2, 3, 4, 8, 12, 11, 10, 9, 5, 6, 7 }));
  vector<vector<int>> m2{ { 2, 1 } };
  EXPECT_EQ(sl.spiralOrder(m2), (vector<int>{ 2, 1 }));
  vector<vector<int>> m3{ { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
  EXPECT_EQ(sl.spiralOrder(m3), (vector<int>{ 1, 2, 3, 6, 9, 8, 7, 4, 5 }));
  vector<vector<int>> m4{ {1} };
  EXPECT_EQ(sl.spiralOrder(m4), (vector<int>{ 1 }));
}
