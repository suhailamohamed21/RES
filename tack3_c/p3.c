#include <stdio.h>

int binarySearch(int array[], int x, int low, int high) {
  if (high >= low) {
    int mid = low + (high - low) / 2;
    // If found at mid, then return it
    if (array[mid] == x)
      return mid;
    // Search the left half
    if (array[mid] > x)
      return binarySearch(array, x, low, mid - 1);
    // Search the right half
    return binarySearch(array, x, mid + 1, high);
  }
  return -1;
}
int main() {
int array [30], n, x;
    printf("please enter number of elements");
    scanf("%d", &n);
    printf("please enter the elements\n");
    for (int i = 0; i < n; i++)
    scanf("%d", &array[i]);
    printf("the array is: \n");
    printf("{");
    for (int i = 0; i < n; i++)
      printf("%d ", array[i]); 
    printf("}\n");
    printf("please enter searched number");
    scanf("%d", &x);
  int result = binarySearch(array, x, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
    return 0;
}