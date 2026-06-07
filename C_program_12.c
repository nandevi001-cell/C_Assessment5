#include<stdio.h>
int main()
{
	int i,sum=0,digit;
	printf("Enter a number:");
	scanf("%d",&i);
	for(;i>0;i=i/10)
	{
		digit=i%10;
		sum=digit+sum;
	}
	printf("Sum:%d",sum);
}
