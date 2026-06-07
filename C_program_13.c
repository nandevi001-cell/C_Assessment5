#include<stdio.h>

int main()
{
    int num, digit, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(; num > 0; num = num / 10)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
    }

    printf("Reverse = %d", rev);

    return 0;
}
