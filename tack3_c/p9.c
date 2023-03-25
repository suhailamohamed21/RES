#include <stdio.h>
//swapping by value
/*int swap(int a, int b);
int main() {
    int a = 5;
    int b = 8;
    printf("before swapping a = %d & b = %d\n", a, b);
    swap(a, b);
    printf("after swapping in main a = %d & b = %d\n", a, b);
    return 0;
}

int swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("after swapping in function a = %d & b= %d\n", a, b);
}*/

//swapping by ref.
int swap(int *a, int *b);
int main() {
    int a = 5;
    int b = 8;
    printf("before swapping a = %d & b = %d\n", a, b);
    swap(&a, &b);
    printf("after swapping in main a = %d & b = %d\n", a, b);
    return 0;
}

int swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("after swaping in function a = %d & b= %d\n", *a, *b);
}