#include<stdio.h>
#include<conio.h>
int main()
{
int agr,ags,aga;

printf("Enter the age of Ram\n");
scanf("%d",&agr);

printf("Enter the age of Shyam\n");
scanf("%d",&ags);

printf("Enter the age of Ajay\n");
scanf("%d",&aga);

if(agr<ags&&agr<aga)
printf("Ram is youngest one");

else{
if(ags<agr&&ags<aga)
printf("Shyam is younget one");
else
printf("Ajay is the youngest one");
}


return 0;
}