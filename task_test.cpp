#include <cstdio>
#include <gtest/gtest.h>
#include "task.h"

auto solution = Solution();
ListNode list1 = ListNode(1);
ListNode list2 = ListNode(2, &list1);
/* ListNode list3 = ListNode(3, &list2); */
/* ListNode list4 = ListNode(3, &list3); */
/* ListNode list5 = ListNode(2, &list4); */
/* ListNode list = ListNode(1, &list5); */

TEST(BasicTests, romanToInt) {
    EXPECT_EQ(solution.isPalindrome(&list2), false);
};
