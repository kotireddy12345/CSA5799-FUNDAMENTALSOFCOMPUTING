#include<stdio.h>
int main()
{
	int d,reversenumber=0,num;
	printf("enter the numbers");
	scanf("%d",&num);
	while(num!=0){
		d=num%10;
		reversenumber=reversenumber*10+d;
		num=num/10;
	}
	printf("%d",reversenumber);
	
}
