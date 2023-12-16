#include<stdio.h>
#include<conio.h>
int sum(int a);
int main()
{
int a=25;
int d=sum(a);
printf("%d\n",d);
return 0;
}int sum(int a){
int c;
if(a==1) 
return 1;
else
c=a+sum(a-1);
return c;
}