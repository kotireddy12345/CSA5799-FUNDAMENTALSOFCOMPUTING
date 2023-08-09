# include <stdio.h>
int main(){
	int n,sum=0;
	
	printf("enter a positive integer");
	scanf("%d",&n);
	
	for(int i = 2;i <=n;i +=2){
		sum +=i;
	}
	 
	 printf("sum of even natural numbers up to %d is: %d\n",n,sum);
	 
	 return 0;
}
