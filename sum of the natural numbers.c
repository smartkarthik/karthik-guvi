#include<stdio.h>
#include<conio.h>
void main()
{
int i=1,num,sum=0;
printf("enter the sum of the natural numbers");
scanf("%d",&num);
for(i=0;i<=num;i++)
{
sum= sum+i;
}
printf("%d",sum);
getch();
}
