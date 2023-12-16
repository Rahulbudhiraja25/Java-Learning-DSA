#include<stdio.h>
int main()
{
char *ptr="Rahul";
while(*ptr!='\0'){
printf("%c",*ptr);
ptr++;
}
return 0;
}