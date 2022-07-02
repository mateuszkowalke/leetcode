#include "task.h"
#include <vector>

bool Solution::isPalindrome(ListNode *head) {
  ListNode *fast_ptr = head, *slow_ptr = head;
  ListNode *mid_ptr = NULL, *prev_ptr = NULL, *next_ptr = NULL;

  while (fast_ptr != NULL && fast_ptr->next != NULL) {
    fast_ptr = fast_ptr->next->next;
    mid_ptr = slow_ptr;
    slow_ptr = slow_ptr->next;
  }

  if (fast_ptr != NULL) {
    mid_ptr = slow_ptr;
    slow_ptr = slow_ptr->next;
  }

  while (slow_ptr != NULL) {
    next_ptr = slow_ptr->next;
    slow_ptr->next = prev_ptr;
    prev_ptr = slow_ptr;
    slow_ptr = next_ptr;
  }
  slow_ptr = prev_ptr;

  while (slow_ptr != NULL) {
    if (slow_ptr->val != head->val) {
      return false;
    }
    slow_ptr = slow_ptr->next;
    head = head->next;
  }

  return true;
}
