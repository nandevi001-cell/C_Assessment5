#include<stdio.h>
int main()
{
	int i,num,digit,count=0;
	printf("Enter a number:");
	scanf("%d",&num);
	for(;num>0;num=num/10)
	{
		digit=num%10;
		if(digit%2!=0)
		{
			count++;
		}
	}
	printf("Number of odd digits=%d",count);
}
