#include<stdio.h>
int main(){
	int n;
	printf("Enter the value of n:");
	do{
		scanf("%d",&n);
		if(n<=0)
		printf("No thats not right");
	}while(n<1);
	printf("Yup thats right : %d",n);
}
