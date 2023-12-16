#include<stdio.h>
#include<conio.h>
int main()
{
int c,d,g;
printf("Enter the value of c\n");
scanf("%d",&c);

printf("Enter the value of d\n");
scanf("%d",&d);

//c==d&&d==c;
//g==c;

g=c;
c=d;
printf("The value of c is %d\n",c);
d=g;
printf("The value of d is %d\n",d);

return 0;
}