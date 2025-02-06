#include "sorting.h"

void quickSort(std::vector<int> &v, int left, int right) {
  if (left >= right) {
    return;
  }
  int mid = (left + right) / 2;
  int last = left;
  std::swap(v[left], v[mid]);
  for (int i = left + 1; i <= right; i++) {
    if (v[i] < v[left]) {
      std::swap(v[++last], v[i]);
    }
  }
  std::swap(v[left], v[last]);
  quickSort(v, left, last - 1);
  quickSort(v, last + 1, right);
}