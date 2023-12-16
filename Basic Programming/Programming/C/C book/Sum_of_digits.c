#include<stdio.h>
#include<conio.h>
int main()
{
int d1,d2,d3,d4,d5,Sum;
long int n;
printf("Enter a 5 digit number \n");
scanf("%d",&n);
d5=n%10;
n=n/10;

d4=n%10;
n=n/10;

d3=n%10;
n=n/10;

d2=n%10;
n=n/10;

d1=n%10;
//printf("%d%d%d%d%d",d5,d4,d3,d2,d1);
Sum=d1+d2+d3+d4+d5;
printf("The sum of digits is %d \n",Sum);
return 0;
}