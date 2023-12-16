#include<stdio.h>
#include<conio.h>
int main()
{int n=1,h,oth;
float r=12.00,ot;

while(n<=10)
{
printf("Enter the number of hours worked\n");
scanf("%d",&h);
if (h>40){
oth=h-40;
ot=(h-40)*r;
n++;
}
else 
ot=0;
printf("Hours worked are %d,overtime hours are %d ,The overtime  salary  of the emploee is %f \n",h,oth,ot);
}
return 0;

}