# include<stdio.h>
int main(){
	int num,i ,factorial=1;
	
	printf("enter a positive integer:");
	scanf("%d",&num);
	
	if(num<0){
		printf("facotorial is not defined for negative integer \n");
		
	}
	else{
		for(i=1;i<=num;i++){
			factorial *=i;
		}
		printf("factorial of %d is %d\n",num,factorial);
	}
	
	return 0;
	   
	   
	   
}
