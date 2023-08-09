#include<stdio.h>
#include<conio.h>
int main()
{
	float principle,rate,sintrest;
	int time;
	printf("enter the principle amount,rate per annum and time\n");
	scanf("%f %f %d",&principle,&rate,&time);
	sintrest=(principle*rate*time)/100.0;
	printf("simple intrest=%f",sintrest);
}
