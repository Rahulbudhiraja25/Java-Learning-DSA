#include<stdio.h>
#include<conio.h>
int main()
{
int m1,m2,m3,m4,m5;
float per;

printf("***Marks should be b/w 0 to 100***\n\n");

printf("Enter the marks in ist subject:\n");
scanf("%d",&m1);

printf("Enter the marks in 2nd subject:\n");
scanf("%d",&m2);

printf("Enter the marks in 3rd subject:\n");
scanf("%d",&m3);

printf("Enter the marks in 4th subject:\n");
scanf("%d",&m4);

printf("Enter the marks in 5th subject:\n");
scanf("%d",&m5);

per=(m1+m2+m3+m4+m5)*100/500;
if(per<=100){
printf("Percentage of student is %f\n",per);

if(per>=60)
printf("Ist division\n");
else if(per<60&&per>=50)
printf("2nd division\n");

else if(per<50&&per>=40)
printf("4th division\n");

else if(per<40)
printf("Fail\n");}
else
printf("\n Error!!\n");
return 0;
}