#include<stdio.h>
#include<conio.h>
int main()
{
int class,no,grace;
printf("Enter the class of student\n");
scanf("%d",&class);


switch(class){
case 1:
printf("Enter the no of subjects student failed in  \n");
scanf("%d",&no);
if(no>3)
printf("No grace marks\n");
else
printf("5 grace marks per subject\n");
break;
case 2:
printf("Enter the no of subjects student failed in  \n");
scanf("%d",&no);
if(no>2)
printf("No grace marks\n");
else
printf("4 grace marks per subject\n");
break;
case 3:
printf("Enter the no of subjects student failed in  \n");
scanf("%d",&no);
if(no>1)
printf("No grace marks\n");
else
printf("5 grace marks \n");
break;

default:
printf("Wrong Input\n\a");



}
return 0;
}