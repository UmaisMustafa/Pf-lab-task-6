#include<stdio.h>
 int main(){
int i=1,n,count;
printf("Enter value of n");
scanf("%d", &n);
while (n>1,i<=n){
count=i%2;
if (count==0){
	printf("%d\n",i);
}
i++;
}
}
