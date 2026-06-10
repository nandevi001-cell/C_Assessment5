#include<stdio.h>
int main()
{
	int i,prime=1,num,sum,ones,tens;
	printf("Enter a number:");
	scanf("%d",&num);
	tens=num/10;
	ones=num%10;
	sum=tens+ones;
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
	if(prime==0 && sum==14 )
	{
		printf("Not prime and sum of the digits is 14");
	}
	else if(prime!=0 && sum==14)
	{
		printf("Prime and sum of the digits is 14");

	}
	else if(prime==0 && sum!=14)
	{
	 printf("Not prime and sum of the digits is not 14");	
	}
	else
	{
	printf("Prime and sum of the digits is not 14");

	}
}
