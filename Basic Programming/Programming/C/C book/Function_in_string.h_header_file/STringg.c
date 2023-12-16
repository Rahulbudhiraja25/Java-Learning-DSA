#include<stdio.h>
int main()
{
// char string[]="RAHUL";
char string[]={'R','a','h','u','l','\0'};
char *ptr=string;
while(*ptr!='\0'){
printf("%c",*ptr);
ptr++;

}
return 0;
}