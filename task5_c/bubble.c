#include <stdio.h>

void bubbleSort(int array[], int size) {
  // loop to access each array element
  for (int count = 0; count < size ; ++count) {
    // loop to compare array elements
    for (int i = 0; i < size - 1; ++i) {
      if (array[i] > array[i + 1]) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      } } } }
int main() {
  int array[] = {20, 45, 50, 11, 8};
  int size = sizeof(array) / sizeof(array[0]);
  printf("Array before sort in Ascending Order:\n");
  for (int i = 0; i < size; ++i) 
    printf("%d  ", array[i]);
  printf("\n");
  bubbleSort(array, size);
  printf("Array after sort in Ascending Order:\n");
 for (int i = 0; i < size; ++i) 
    printf("%d  ", array[i]);  
 printf("\n");
}