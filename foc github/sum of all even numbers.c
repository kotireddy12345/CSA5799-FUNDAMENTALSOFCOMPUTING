#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,sum=0;
	printf("enter the numbers");
	scanf("%d",&n);
	for(i=2;i<=n;i+=2)
	{
		sum+=i;
	}
	printf("the sum of all even numbers is %d\n",sum);
	return 0;
}
