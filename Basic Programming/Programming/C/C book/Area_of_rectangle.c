#include<stdio.h>
#include<conio.h>
int main()
{
int l,b;
float perimeter,area;
printf("Enter the length of rectangle\n");
scanf("%d",&l);

printf("Enter the breadth of rectangle\n");
scanf("%d",&b);

perimeter=2*(l+b);
area=l*b;
printf("The perimeter of rectangle is %f\n",perimeter);
printf("Enter the area of rectangle is %f\n",area);
if(area>perimeter)
printf("The area of rectangle is greater than its perimeter");
else
printf("The area is less than its perimeter");
return 0;
}