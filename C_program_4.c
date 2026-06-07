#include<stdio.h>
int main()
{
	int i,sum;
	sum=0;
	for(i=6;i>=1;i--)
	{
		sum=i+sum;
	}
	printf("Sum:%d",sum);
}
