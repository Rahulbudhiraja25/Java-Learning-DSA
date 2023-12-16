#include<stdio.h>
#include<conio.h>
void avp(float*,float*);
int main()
{
float p,avg;
avp(&p,&avg);
printf("Percentage =%f,Avg =%f\n",p,avg);

return 0;
}void avp(float*p,float*avg){
int I,II,III;    
printf("Enter the marks of student in Ist subject\n");
scanf("%d",&I);

printf("Enter the marks of student in 2nd subject\n");
scanf("%d",&II);

printf("Enter the marks of student in 3rd subject\n");
scanf("%d",&III);

*p=*avg=(I+II+III)/3.0;

}