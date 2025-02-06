#include "sorting.h"

void bubbleSort(std::vector<int> &v) {
  bool isSorted = false;
  for (int i = 0, n = v.size(); i < n; i++) {
    isSorted = true;
    for (int j = 0; j < n - i - 1; j++) {
      if (v[j] > v[j + 1]) {
        std::swap(v[j], v[j + 1]);
        isSorted = false;
      }
    }
    if (isSorted) {
      return;
    }
  }
}