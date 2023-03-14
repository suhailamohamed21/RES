#include <stdio.h>
int main() {
  int a, b;
  printf("please enter a: ");
  scanf("%d", &a);
  printf("please enter b: ");
  scanf("%d", &b);
  printf("before swap a=%d & b=%d \n", a , b);

  a = a + b;   
  b = a - b;
  a = a - b;
  printf("After swap a=%d & b=%d", a , b);

  return 0;
}