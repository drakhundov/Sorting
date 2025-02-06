#include <limits>

#include "sorting.h"

int _findMinIdxInVector(std::vector<int> &v, int startPos) {
  int idx = -1, val = std::numeric_limits<int>::max();
  for (int i = startPos, n = v.size(); i < n; i++) {
    if (v[i] < val) {
      idx = i;
      val = v[i];
    }
  }
  return idx;
}

void selectionSort(std::vector<int> &v) {
  for (int i = 0, n = v.size(); i < n; i++) {
    int minIdx = _findMinIdxInVector(v, i);
    std::swap(v[i], v[minIdx]);
  }
}