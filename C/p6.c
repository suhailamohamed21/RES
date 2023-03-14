#include <stdio.h>  
int main()  {
    char c;
    printf("please enter character: ");
    scanf("%c", &c);

    if ( c=='a' || c=='o' || c=='i' || c=='e' || c=='u' || c=='A' || c=='O' || c=='I' || c=='E' || c=='U' )
    {
        printf("%c is vowel", c);
    }
    else {
    printf("%c is a consonant.", c);
    }
    return 0;
}  