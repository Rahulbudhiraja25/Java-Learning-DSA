#include<stdio.h>
#include<conio.h>

int main()
{
    
int p,t;
float r,si;
printf("Enter the principal\n");
scanf("%d",&p);

printf("Enter the rate\n");
scanf("%f",&r);

printf("Enter the time\n");
scanf("%d",&t);

si=(p*r*t)/100;
printf("Simple interest for %d year is %f\n",t,si);
getch();
return 0;
}