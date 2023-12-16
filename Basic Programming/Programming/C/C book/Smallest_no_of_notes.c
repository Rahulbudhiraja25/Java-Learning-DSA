#include<stdio.h>
#include<conio.h>
int main()
{
int rs1,rs2,rs5,rs10,rs50,rs100,n,total_notes;

printf("Enter the sum:");
scanf("%d",&n);

rs100=n/100;
n=n%100;

rs50=n/50;
n=n%50;

rs10=n/10;
n=n%10;

rs5=n/5;
n=n%5;

rs2=n/2;
n=n%2;
rs1=n/1;
n=n%1;

total_notes=rs100+rs50+rs10+rs5+rs2+rs1;
printf("Smallest number of notes are %d\n",total_notes);

printf("Notes of 100 are %d\n",rs100);
printf("Notes of 50 are %d\n",rs50);
printf("Notes of 10 are %d\n",rs10);
printf("Notes of 5 are %d\n",rs5);
printf("Notes of 2 are %d\n",rs2);
printf("Notes of 1 are %d\n",rs1);

return 0;
}