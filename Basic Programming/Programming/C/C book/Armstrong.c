// TO BE CONTINUED


#include<stdio.h>

#include<conio.h>
int main()
{
int a=0,d1,d2,d3;
if(a<=500)
a++;

d3=a%10;
a=a/10;

d2=a%10;
a=a/10;

d1=a%10;
// n=n/10;

while(1)
{
if((d1*d1*d1)+(d2*d2*d2)+(d3*d3*d3)==a)
printf("%d is an armstrong number\n",a);
a++;
}
return 0;
}