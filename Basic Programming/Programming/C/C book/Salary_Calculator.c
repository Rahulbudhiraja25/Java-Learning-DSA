#include<stdio.h>
#include<conio.h>
int main()
{char g,qual;
int yos,sal;
printf("Enter the gender(m-male,f-female)\n");
scanf("%c",&g);

printf("Enter the Qualification(p-post graduate,g-graduate)\n");
scanf(" %c",&qual);

printf("Enter the Year of service");
scanf("%d",&yos);

if(g=='m'&&qual=='p'&&yos>=10)
{sal=15000;
printf("Salary is %d",sal);}

else if(g=='m'&&qual=='g'&&yos>=10)
{sal=10000;
printf("Salary is %d",sal);}

else if(g=='m'&&qual=='p'&&yos<10)
{sal=10000;
printf("Salary is %d",sal);}

else if(g=='m'&&qual=='g'&&yos<10)
{sal=7000;
printf("Salary is %d",sal);}

else if(g=='f'&&qual=='p'&&yos>=10)
{sal=12000;
printf("Salary is %d",sal);}

else if(g=='f'&&qual=='g'&&yos>=10)
{sal=9000;
printf("Salary is %d",sal);}

else if(g=='f'&&qual=='p'&&yos<10)
{sal=10000;
printf("Salary is %d",sal);}

else if(g=='f'&&qual=='g'&&yos<10)
{sal=6000;
printf("Salary is %d",sal);}

else 
printf("Error!!");

return 0;
}