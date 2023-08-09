#include<stdio.h>
int main()
{
	int n,i,product=1;
	printf("enter the numbers");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		product*=i;
	}
	printf("factorial series is %d", product);
	return 0;
	}
	
