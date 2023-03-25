#include <stdio.h>

int main() {
    int array [30], n, inserted, location;
    printf("please enter the number of elements\n");
    scanf("%d", &n);

    printf("please enter %d elements\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &array[i]);
    
    printf("please enter the inserted number:");
    scanf("%d", &inserted);

    printf("please enter the location of %d:", inserted);
    scanf("%d", &location);

    for (int i = n - 1; i >= location; i--)
        array[i+1] = array[i];
        array[location-1] = inserted;
    printf("the new array is:\n");
    for (int i = 0; i <= n; i++)
        printf("%d\n", array[i]);
        return 0;
}