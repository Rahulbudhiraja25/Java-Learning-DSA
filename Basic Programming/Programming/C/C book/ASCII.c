#include<stdio.h>
#include<conio.h>
int main()
{ int a=0;

while(a>=0&&a<=255)
{
printf("Ascii value of %c is %d\n",a,a);
a++;
}
getch();
return 0;
}