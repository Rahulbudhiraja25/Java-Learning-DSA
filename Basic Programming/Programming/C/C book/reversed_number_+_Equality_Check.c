#include<stdio.h>
#include<conio.h>
int main()
{
int d1,d2,d3,d4,d5;
long int numb,revnumb,temp_numb;
printf("Enter the number\n");
scanf("%ld",&numb);
//numb==temp_numb;
temp_numb=numb;
d5=numb%10;
numb=numb/10;

d4=numb%10;
numb=numb/10;

d3=numb%10;
numb=numb/10;

d2=numb%10;
numb=numb/10;

d1=numb%10;

revnumb=d5*10000+d4*1000+d3*100+d2*10+d1;
printf("The reverse of the number is %d\n",revnumb);
if(temp_numb==revnumb)
printf("Orignal number and reversed number are equal\n");
else
printf("Orignal number and reversed number are not equal\n");
return 0;
}