#include <stdio.h>
int main() {
    int a, b, c;  
  
    printf("Enter 3 numbers \n");  
    scanf("%d %d %d", &a, &b, &c);  
  
(a>b && a>c) ? printf("Biggest is %d", a) : (b>c) ? printf("Biggest is %d", b):  printf("Biggest is %d", c);

return 0;
}