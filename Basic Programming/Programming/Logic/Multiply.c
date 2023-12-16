#include<stdio.h>
int main()
{
int a,b,c,temp;
printf("Enter first number \n");
scanf("%d",&a);
printf("Enter second number \n");
scanf("%d",&b);
temp=a;
for(c=1;c<b;c++){
    a=a+temp;
}
printf("Multiplication of a and b is %d",a);
return 0;
}


//2*3=6
//2+2+2
//3*2=6
//3+3=6