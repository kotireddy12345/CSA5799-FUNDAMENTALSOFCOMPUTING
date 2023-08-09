#include<stdio.h>
int main()
{
	int age;
	printf("enter the age");
	scanf("%d",&age);
	{
		if(age>18)
		printf("he/she eligible for vote");
	else
		printf("he/she not eligible for vote");
	}
	return 0;
}
