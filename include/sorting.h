#include <vector>

void countingSort(std::vector<int> &, int);

void radixSort(std::vector<int> &, int = -1);
void _countingSortWithExp(std::vector<int> &, int);  // Helper for radix sort.

void mergeSort(std::vector<int> &, int, int);
void merge(std::vector<int> &, int, int, int);

void quickSort(std::vector<int> &, int, int);