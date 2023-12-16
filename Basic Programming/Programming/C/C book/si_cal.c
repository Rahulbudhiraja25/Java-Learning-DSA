#include<stdio.h>
int main()
{
int p,t;
float r,si;

printf("Enter principal \n");
scanf("%d",&p);
printf("Enter rate \n");
scanf("%f",&r);
printf("Enter time \n");
scanf("%d",&t);

si=(p*r*t)/100;
printf("Simple interest is %f",si);
return 0;
}