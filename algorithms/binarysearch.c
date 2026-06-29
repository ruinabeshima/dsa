#include <stdio.h>

int binary_search(int target, int *nums) {
  int left = 0;
  int right = 9;

  while (right >= left) {
    int complement = left + (right - left) / 2;
    if (nums[complement] == target) {
      return complement;
    } else if (nums[complement] < target) {
      left = complement + 1;
    } else {
      right = complement - 1;
    }
  }

  return -1;
}

int main() {
  int nums[10] = {7, 12, 23, 31, 45, 52, 68, 71, 84, 96};
  printf("%d \n", binary_search(12, nums));
  return 0;
}