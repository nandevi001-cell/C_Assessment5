#include<stdio.h>
int main()
{
	int i,tens,sum=0;
	for(i=11;i<=99;i+=2)
	{
		tens=i/10;
		if(tens==7)
		{
			sum=i+sum;
		}
	}
	printf("Sum:%d",sum);
}
