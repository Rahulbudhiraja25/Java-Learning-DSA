#include<stdio.h>
#include<conio.h>
int main()
{
int b,temp;
float a,pow;
printf("Enter Ist number");
scanf("%f",&a);

printf("Enter IInd number");
scanf("%d",&b);

pow=temp=1;
while(temp<=b)
{
pow=pow*a;
temp++;

}
printf("%f power to the %d is %f ",a,b,pow);
return 0;
}