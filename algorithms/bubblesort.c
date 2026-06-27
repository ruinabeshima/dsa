/* Bubble sort in ascending order - O(n^2) complexity */

#include <stdbool.h>
#include <stdio.h>

int main() {
  int nums[10] = {56, 17, 34, 2, 156, 10, 4, 78, 49, 120};

  for (int i = 0; i < 10; i++) {
    bool swap = false;
    for (int j = 0; j < 10 - i - 1; j++) {
      if (nums[j] > nums[j + 1]) {
        int temp = nums[j];
        nums[j] = nums[j + 1];
        nums[j + 1] = temp;
        swap = true;
      }
    }
    if (!swap) {
      break;
    }
  }

  for (int i = 0; i < 10; i++) {
    printf("%d ", nums[i]);
  }
  printf("\n");
  return 0;
}