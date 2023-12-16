#include<stdio.h>
#include<conio.h>
#include<math.h>



int main(){
float a,b,c,sp,area;


printf("Enter the value of Three Sides\n");
scanf("%f %f %f",&a,&b,&c);

sp=(a+b+c)/2;

area=sqrt(sp*(sp-a)*(sp-b)*(sp-c));

printf("The area of triangle is %f",area);
return 0;
}