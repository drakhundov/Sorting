#include "sorting.h"

void insertionSort(std::vector<int> &v) {
  int k;
  for (int i = 1, n = v.size(); i < n; i++) {
    if (v[i] > v[i - 1]) {
      continue;
    }
    k = i;
    while (v[k] < v[k - 1]) {
      std::swap(v[k], v[k - 1]);
      k--;
    }
  }
}