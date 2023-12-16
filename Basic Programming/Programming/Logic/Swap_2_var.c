//swap 2 var with using 3rd var
#include<stdio.h>
int main()
{
int a=20,b=50;
printf("Numbers before reverse is a= %d\nb=%d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("Numbers after reverse is a= %d\nb=%d\n",a,b);
return 0;
}