#include<stdio.h>
int main(){
	int n,a=0,c=0;
		printf("enter value of n:");
		scanf("%d",&n);
		int b=n;
		while(b!=0){
			a=n%10;
			b=n/10;
			c=power(a,3)+c;
		}if(c==n)
		printf("It is an Armstrong number");
		else
		printf("It is not an Armstrong number");
}
