#include<stdio.h>
#include<conio.h>
int main()
{char a;
printf("Enter the character\n");
scanf("%c",&a);
if(a>=65&&a<=90)
printf("The character is a Capital Letter\n");
else if(a>=97&&a<=122)
printf("The chracter is a Small Case Letter\n");
else if(a>=48&&a<=57)
printf("The chracter is a Digit\n");
else
printf("The chracter is a Special Symbol\n");
return 0;
}