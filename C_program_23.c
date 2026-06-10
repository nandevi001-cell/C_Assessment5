#include<stdio.h>

int main()
{
    int num, digit, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(; num > 0; num = num / 10)
    {
        digit = num % 10;

        if(digit == 1 || digit == 4 || digit == 9)
        {
            count++;
        }
    }

    printf("Count = %d", count);

    return 0;
}
