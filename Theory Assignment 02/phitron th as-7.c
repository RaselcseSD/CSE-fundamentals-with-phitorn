#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
  return (*(int *)a - *(int *)b);
}

double find_median(int *arr, int len) {
  qsort(arr, len, sizeof(int), compare);

  if (len % 2 == 0) {
    return (arr[len / 2 - 1] + arr[len / 2]) / 2.0;
  } else {
    return arr[len / 2];
  }
}

int main() {
  int arr[] = {7, 3, 5, 2, 9, 1};
  int len = sizeof(arr) / sizeof(arr[0]);

  double median = find_median(arr, len);

  printf("Median: %f\n", median);

  return 0;
}

