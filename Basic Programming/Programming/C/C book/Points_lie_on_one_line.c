#include<stdio.h>
#include<conio.h>
int main()
{float x1,x2,x3,y1,y2,y3,m,n;
printf("Enter the value of ist coordinate(x1,y1)\n");
scanf("%f %f",&x1,&y1);

printf("Enter the value of 2nd coordinate(x2,y2)\n");
scanf("%f %f",&x2,&y2);

printf("Enter the value of 3rd coordinate(x1,y1)\n");
scanf("%f %f",&x3,&y3);

m=(y2-y1)/(x2-x1);
n=(y3-y2)/(x3-x2);

if(m==n)
printf("The points lie on straight line\n");
else
printf("The points doesn't lie on straight line\n");

return 0;
}