#include <stdio.h>
#include <stdlib.h>

void merge(double array[], size_t start, size_t mid, size_t end) {
  size_t i, j, k;
  size_t n1 = mid - start + 1;
  size_t n2 = end - mid;

  double leftArray[n1], rightArray[n2];

  for (i = 0; i < n1; ++i) {
    leftArray[i] = array[start + i];
  }
  for (j = 0; j < n2; ++j) {
    rightArray[j] = array[mid + 1 + j];
  }

  i = 0;
  j = 0;
  k = start;
  while (i < n1 && j < n2) {
    if (leftArray[i] <= rightArray[j]) {
      array[k] = leftArray[i];
      i++;
    } else {
      array[k] = rightArray[j];
      j++;
    }
    k++;
  }

  while (i < n1) {
    array[k] = leftArray[i];
    i++;
    k++;
  }

  while (j < n2) {
    array[k] = rightArray[j];
    j++;
    k++;
  }
}

void sort(double array[], size_t start, size_t end) {
  if (start < end) {
    size_t mid = start + (end - start) / 2;

    sort(array, start, mid);
    sort(array, mid + 1, end);

    merge(array, start, mid, end);
  }
}

int main(int argc, char *argv[argc + 1]) {
  size_t n = argc - 1;
  if (n == 0) {
    return EXIT_SUCCESS;
  }
  double array[n];
  for (size_t i = 0; i < n; ++i) {
    array[i] = strtod(argv[i + 1], nullptr);
  }

  sort(array, 0, n - 1);

  for (size_t i = 0; i < n; ++i) {
    printf("%g\n", array[i]);
  }
  return EXIT_SUCCESS;
}
