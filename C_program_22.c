#include<stdio.h>

int main()
{
    int num, pair, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(; num >= 10; num = num / 10)
    {
        pair = num % 100;

        if(pair % 2 != 0)
        {
            count++;
        }
    }

    printf("Count = %d", count);

}
