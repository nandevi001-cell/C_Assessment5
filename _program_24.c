#include<stdio.h>

int main()
{
    int num, pair, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(; num >= 10; num = num / 10)
    {
        pair = num % 100;

        if(pair == 16 || pair == 25 || pair == 36 ||
           pair == 49 || pair == 64 || pair == 81)
        {
            count++;
        }
    }

    printf("Count = %d", count);

    return 0;
}
