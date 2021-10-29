#include "gtest/gtest.h"
#include "num238.hpp"
using namespace num238;
using namespace std;
TEST(num238, test1)
{
  Solution sl{};
  vector<int> v1{ 2, 3, 4 };
  auto r1 = sl.productExceptSelf(v1);
  EXPECT_TRUE((r1 == vector<int>{ 12, 8, 6 }));
}

TEST(num238, test_two_number)
{
  Solution sl{};
  vector<int> v1{ 2, 3 };
  auto r1 = sl.productExceptSelf(v1);
  EXPECT_TRUE((r1 == vector<int>{ 3, 2 }));
}