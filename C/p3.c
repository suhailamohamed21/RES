#include <stdio.h>
int main () {
    float n1, n2;
    char op;
    printf("please enter n1, op (+,-,*,/), n2:" );
    scanf("%f %c %f" , &n1, &op, &n2);
    switch (op) {
    case '+' :
    printf("%.2f + %.2f = %.2f ", n1, n2, n1+n2);
        break;
    case '-' :
    printf("%.2f - %.2f = %.2f ", n1, n2, n1-n2);
        break;
        case '*' :
    printf("%.2f * %.2f = %.2f ", n1, n2, n1*n2);
        break;
        case '/' :
    printf("%.2f / %.2f = %.2f ", n1, n2, n1/n2);
        break;
    default:
    printf("operator is not correct");
        break;
    }


}