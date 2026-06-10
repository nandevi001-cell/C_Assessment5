#include<stdio.h>
int main()
{
	int i,num,prime=1;
	printf("Enter a number:");
	scanf("%d",&num);
	
	if(num<=1)
	{
		prime=0;
	}
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			prime=0;
		}
	}
	if(prime==1)
	printf("The number is a prime number");
	else
	printf("The number is not a prime number");
}
