#include<stdio.h>

int main()
{
    int i, j, prime = 1, count = 0;

    for(i = 0; i <= 9; i++)
    {
        prime = 1;

        if(i <= 1)
            prime = 0;

        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
                prime = 0;
        }

        if(prime == 1)
        {
            count = count + 1;
        }
    }

    printf("Total one-digit prime numbers = %d", count);

}
