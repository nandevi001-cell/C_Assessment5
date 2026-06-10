#include<stdio.h>
int main()
{
	int i,num,value,prime=1;
	printf("Enter a number:");
	scanf("%d",&num);
	value=(num/10)%100;
	if(value<=1)
	{
		prime=0;
	}
	for(i=2;i<value;i++)
	{
		if(value%i==0)
		{
			prime=0;
		}
	}
	if (prime==1)
	printf("%d is prime",value);
	else
	printf("%d is not prime",value);
}
