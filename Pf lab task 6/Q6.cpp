#include<stdio.h>
int main(){
int n,i,count=0,m=0,series=0,b=1;
printf("Enter value of n:");
scanf("%d", &n);
if (n==0||n==1)
count=1;
if (n<0)
count=1;
for(i=2;i<n;i++){
if (n%i==0)
count=1;
}
if (count==1)
printf("%d is not a prime number",n);
else
printf("%d is a prime number\n",n);

printf("Fibonacci series for %d terms \n",n);
if (count==0){
while(m<=n) {
printf("%d,",m);
series=m+b;
m=b;
b=series;
}
}
}
