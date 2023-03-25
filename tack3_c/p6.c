#include <stdio.h>
int prime(int);
int n, i, flag = 0;
int main() {
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  prime(n);
  return 0;
}
int prime(int n)
{
    if (n == 0 || n == 1)
    flag = 1;

  for (i = 2; i <= n / 2; ++i) {

      if (n % i == 0) {
      flag = 1;
      break;
    }
  }
  if (flag == 0)
    printf("%d is a prime number.", n);
  else
    printf("%d is not a prime number.", n);
}