#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter first number \n");
scanf("%d",&a);
printf("Enter second number \n");
scanf("%d",&b);
for(c=0;c<b;c++){
    a++;
}
printf("Addition of a and b is %d",a);
return 0;
}