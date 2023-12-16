#include<stdio.h>
#include<conio.h>
#include <math.h>
int main()
{
int time,p,r,n,q,a,count;
float intr;
for(count=1;count<=10;count++)
{
printf("Enter the value of principal\n");
scanf("%d",&p);

printf("Enter the rate in (percent) \n");
scanf("%d",&r);

printf("Enter the time(times per year)\n");
scanf("%d",&q);

printf("Enter the number of years\n");
scanf("%d",&n);

time=n*q;

a=p*(1+r/q);

intr=pow(a,time);
printf("\n Amount of intrest is %f \n",intr);
}
return 0;
}