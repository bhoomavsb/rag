#include<stdio.h>
voidmain()
{
int num,temp,sum=0;
scanf("%d",&num);
while(num>=1)
{
temp=num;
digit=temp%10;
sum=sum+digit*digit*digit;
num=temp/10;
}
printf("%d",sum);
}
