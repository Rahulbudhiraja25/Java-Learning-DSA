#include<stdio.h>
#include<conio.h>
int main()

{int s1,s2,s3;
    
    printf("Enter the Ist side\n");
scanf("%d",&s1);

printf("Enter the 2nd side\n");
scanf("%d",&s2);

printf("Enter the 3rd side\n");
scanf("%d",&s3);

if(s1==s2&&s2==s3)
printf("The traingle is equilateral\n");
else if (s1==s2||s2==s3||s1==s3)
printf("The triangle is isosceleus\n");
else if(s1!=s2&&s2!=s3&&s1!=s3)
printf("The triangle is scalene\n");
else
printf("The triangle is right angled\n");
return 0;
}