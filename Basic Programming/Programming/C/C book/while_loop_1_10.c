#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
printf("Enter the value of a\n");
scanf("%d",&a);

printf("Enter the value of b\n");
scanf("%d",&b);

while(a<=b)
{
printf("%d\n",a);
a+=1;
}
return 0;
}