#include<stdio.h>
int add(int a,int b){
int c;
c=a+b;
return c;
}
int main()
{
int a=2,b=3;
int d=add(a,b);
printf("The sum of two number is %d",d);
return 0;
}