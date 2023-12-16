#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int choice,num,fact,i;
 while(1)   {
printf("\n\n***Choose an option from the menu***\n");
printf("1-Factorial\n");
printf("2-Prime test\n");
printf("3-Odd Even Test\n");
printf("4-Exit!\n");
scanf("%d",&choice);

switch(choice)
{
case 1:
printf("***Factorial Finder***\n\n");
printf("Enter the number\n");
scanf("%d",&num);
fact=1;
for(i=1;i<=num;i++){
fact=fact*i;
printf("Factorial =%d\n",fact);
}
break;

case 2:
printf("***Prime or Not Prime Tester***\n\n");
printf("Enter the number\n");
scanf("%d",&num);
for(i=2;i<num;i++){

if(num%i==0){
 printf("Not prime\n");
break;
}
}
if(num==i)
    printf("Prime number\n");
break;

case 3:
printf("***Odd Even Check***\n\n");
printf("Enter the number\n");
scanf("%d",&num);
if(num%2==0)
printf("Even number\n");
else
printf("Odd Number\n");
break;
case 4:
exit(0);
default:
printf("Wrong choice!!\n\a");
}
 }
return 0;
}