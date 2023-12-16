#include<stdio.h>
#include<conio.h>
int main()
{
int i=20;
int *a;
int **b;
a=&i;
b=&a;
printf("%d\n",**(b));
return 0;
}