#include<stdio.h>
#include<conio.h>
int main()
{
int a1,a2,a3;
printf("Enter the value of angle 1(in degree)\n");
scanf("%d",&a1);
printf("Enter the value of angle 2(in degree)\n");
scanf("%d",&a2);
printf("Enter the value of angle 3(in degree)\n");
scanf("%d",&a3);

if(a1+a2+a3==180)
printf("The triangle is valid\n");
else
printf("The triangle is not valid\n");
return 0;
}