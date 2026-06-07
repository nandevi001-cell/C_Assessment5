#include<stdio.h>

int main()
{
    int num, temp, first, last, digits = 1, power = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;

    temp = num;
    while(temp >= 10)
    {
        temp = temp / 10;
        digits++;
        power = power * 10;
    }

    first = temp;

    num = num - first * power;  
    num = num - last;          
    num = last * power + num + first;

    printf("%d", num);

    return 0;
}
