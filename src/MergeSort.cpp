#include "sorting.h"

void mergeSort(std::vector<int> &v, int left, int right) {
  if (left < right) {
    int mid = (left + right) / 2;
    mergeSort(v, left, mid);
    mergeSort(v, mid + 1, right);
    merge(v, left, mid, right);
  }
}

void merge(std::vector<int> &v, int left, int mid, int right) {
  // Left array: left, mid
  // Right array: mid + 1, right
  int i, j, k, tmp;
  i = left;
  j = mid + 1;
  while (i <= mid && j <= right) {
    if (v[i] <= v[j]) {
      i++;
    } else {
      tmp = v[j];
      k = j;
      while (k != i) {
        v[k] = v[k - 1];
        k--;
      }
      v[k] = tmp;
      mid++;
      i++;
      j++;
    }
  }
}