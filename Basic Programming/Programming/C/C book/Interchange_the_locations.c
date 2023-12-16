#include<stdio.h>
int main()
{
int a=20,b=30,temp;
temp=a;
a=b;
b=temp;
printf("The value of a is %d,b is %d",a,b);
return 0;
}