#include<stdio.h>
int main()
{
	int i,ones,sum;
	sum=0;
	for(i=10;i<=99;i+=5)
	{
		ones=i%10;
	if(ones==5)
	{
		sum=i+sum;
	}
}
	printf("Sum:%d",sum);
}
