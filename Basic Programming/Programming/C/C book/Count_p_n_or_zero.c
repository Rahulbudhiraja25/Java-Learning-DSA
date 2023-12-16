#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,pos=0,neg=0,zero=0;
printf("Enter the no which you wants to print (A to B) \n");
scanf("%d %d",&a,&b);
while(a<=b)
{
printf("%d\n",a);

if(a>0)
pos++;
else if(a<0)
neg++;
else
zero++;

a++;
}
printf("The number of positive :%d negative :%d and zeros :%d ",pos,neg,zero);
return 0;
}