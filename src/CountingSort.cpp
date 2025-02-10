#include "sorting.h"

/*
 ! Non-comparison-based.
 * Time Complexity:
 *   Best Case: O(n)
 *   Worst Case: O(n+k)
 * Space Complexity: O(k)
 * n - size of the dataset
 * k - maximum value in the dataset
 ! Adaptive: No
 ! Stable: Yes
 ! In-place: No
 * Advantages:
 *   Fast for small ranges: when k is small, runs in linear time O(n).
 *   Stable: maintains relative order of equal elements.
 * Disadvantages:
 *   Only for discrete values (e.g. integers).
 *   Out-of-place: requires extra space.
 *   Inefficient for large range.
 * Applications:
 *   Use for databases with small range.
 *   Used as subroutine in Radix Sort.
 */

void countingSort(std::vector<int> &v, int max) {
  std::vector<int> count(max + 1, 0);
  std::vector<int> sorted(v.size(), 0);
  for (auto &elem : v) {
    count[elem]++;
  }
  for (int i = 1; i <= max; i++) {
    count[i] += count[i - 1];
  }
  for (int i = v.size() - 1; i >= 0; i--) {
    int tmp = v[i];
    sorted[count[tmp] - 1] = tmp;
    count[tmp]--;
  }
  v = std::move(sorted);
}