#include <stdio.h>
int main() {
    int n;
    long factorial=1;
    printf("Enter the number: \n");
    scanf("%d", &n);
    
    if (n>0)
    {
        for (int i = 1; i <=n; i++)
        {
            factorial *= i;
        }
        printf("factorial of %d = %d ", n, factorial);
    }
    else if (n<0)
    {
        printf("Factorial of a negative number doesn't exist");
    }
    return 0;
}