#include<stdio.h>
int main()
{
    int a,d1,d2,d3,d4,d5,sum;
printf("Enter a five digit number\n");
scanf("%d",&a);

d5=a%10;
a=a/10;
d4=a%10;
a=a/10;
d3=a%10;
a=a/10;
d2=a%10;
a=a/10;
d1=a%10;

sum=d1+d2+d3+d4+d5;
printf("Sum of digits is %d \n",sum);
return 0;
}