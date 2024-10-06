#include<stdio.h>
 int main(){
int n;
printf("Enter value of n:"); 
while(n!=0){
int sum=0;
scanf("%d", &n);
sum=sum+n;
if(sum!=0){
printf("Sum is : %d\n", sum);
}
}
printf("You have entered Zero");
}
