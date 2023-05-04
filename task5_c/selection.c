#include <stdio.h>

int main() {
 int arr[] = {10, 70, 50, 6, 30, 200};
 int n = sizeof(arr) / sizeof(arr[0]);

printf("the array is: \n");
    printf("{");
    for (int i = 0; i < n; i++)
      printf("%d ", arr[i]); 
    printf("}\n");
    for (int i = 0; i < n; i++) {     
        for (int j = i+1; j < n; j++) {     
           if(arr[i] < arr[j]) {    
               int temp = arr[i];    
               arr[i] = arr[j];    
               arr[j] = temp;  }     
        }  }    
    printf("Elements of array sorted in descending order: \n");    
    printf("{");
        for (int i = 0; i < n; i++)     
            printf("%d ", arr[i]);   
    printf("}\n");
    return 0;
}