#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{int numb;
printf("Enter the number");
scanf("%d",&numb);

if(numb<0){
numb=-numb;
printf("Absolute value is %d",numb);
}
else
printf("Abs value is %d",numb);

return 0;
}