#include<stdio.h>
#include<conio.h>
int main()
{int s1,s2,s3,lside,sum;
printf("Enter the side 1\n");
scanf("%d",&s1);

printf("Enter the side 2\n");
scanf("%d",&s2);

printf("Enter the side 3\n");
scanf("%d",&s3);

if(s1>s2&&s1>s3)
{sum=s2+s3;
lside=s1;}
else if(s2>s1&&s2>s3)
{sum=s1+s3;
lside=s1;}

else if(s3>s1&&s3>s2)
{sum=s1+s2;
lside=s3;}

if(sum>lside)
printf("Valid Triangle\n");
else
printf("Invalid Triangle\n");
return 0;
}