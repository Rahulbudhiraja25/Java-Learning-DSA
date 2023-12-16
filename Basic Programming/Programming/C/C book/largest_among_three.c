#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter first number\n");
scanf("%d",&a);
printf("Enter second number\n");
scanf("%d",&b);
printf("Enter third number\n");
scanf("%d",&c);

if(a>b&&a>c){
    printf("A is greatest");
}
else if (b>c){
    printf("B is greatest");
}
else
printf("C is greatest");
return 0;
}