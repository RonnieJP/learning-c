#include <stdio.h>
#include <stdlib.h>

size_t partition(double array[], size_t start, size_t end) {
  double pivot = array[end];

  size_t i = start;

  for (size_t j = start; j < end; ++j) {
    if (array[j] <= pivot) {
      double temp = array[i];
      array[i] = array[j];
      array[j] = temp;
      i++;
    }
  }

  double temp = array[i];
  array[i] = array[end];
  array[end] = temp;

  return i;
}

void sort(double array[], size_t start, size_t end) {
  if (start < end) {
    size_t pivotIndex = partition(array, start, end);

    sort(array, start, pivotIndex - 1);
    sort(array, pivotIndex + 1, end);
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

  bool sorted = true;
  for (size_t i = 0; i < n - 1; ++i) {
    if (array[i] > array[i + 1]) {
      sorted = false;
      break;
    }
  }
  if (sorted) {
    printf("Array sorted");
  }

  return EXIT_SUCCESS;
}
