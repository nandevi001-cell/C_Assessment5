#include<stdio.h>
int main()
{
	int i,tens,ones;
	for(i=12;i<=99;i+=2)
	{
		tens=i/10;
		ones=i%10;
		if(tens+ones==6)
		{
			printf("%d\n",i);
		}
	}
}
