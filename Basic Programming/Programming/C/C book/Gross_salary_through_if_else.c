#include<stdio.h>
#include<conio.h>
int main()
{
int bs,hra,da;
float gs;
printf("Enter the basic salary of emploee\n");
scanf("%d",&bs);

if(bs<1500){
hra=bs*10/100;
da=bs*90/100;
}
else
{ hra=500;
da=bs*98/100;
}
gs=bs+da+hra;
printf("The gross salary of an emploee is :%f",gs);

return 0;
}