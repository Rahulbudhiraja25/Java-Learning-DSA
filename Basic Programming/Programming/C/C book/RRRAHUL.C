#include<stdio.h>
#include<conio.h>

void main()
{

float a;
float b;
char op;
float result;

clrscr();

printf("Enter the first number");
scanf("%f",&a);

printf("Enter the oper

switch (op)

{
case '-':
result = a-b;
printf("%f",result);
break;

case '+':
result = a+b;
printf("%f",result);
break;

case '*':
result = a*b;
printf("%f",result);
break;

case '/':
result = a/b;
printf("%f",result);
break;

default :
printf("the operator is not valid:");

}
getch();

}

