#include<stdio.h>
int main()
{
char ptr[50];
printf("Enter your name \n");
// scanf("%s",ptr);
gets(ptr);
printf("Your name is %s",ptr);
return 0;
}