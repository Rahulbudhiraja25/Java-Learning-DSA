#include<stdio.h>
#include<conio.h>
int main()
{
int a=420;
printf("The address of a is %u\n",&a);
printf("The value of a is %d\n",*(&a));
return 0;
}