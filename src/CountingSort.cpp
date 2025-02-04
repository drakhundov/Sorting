#include "sorting.h"

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