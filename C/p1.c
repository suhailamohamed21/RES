#include <math.h>
#include <stdio.h>

int main() {
int base, power, result;
  printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter a power: ");
    scanf("%d", &power);

    result = pow(base, power);

    printf("result is %d", result);
    return 0;
}