#include<stdio.h>
void main()
{
int fact=1,i,n;
printf("Enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("The factorial of the given number is %d",fact);
}
