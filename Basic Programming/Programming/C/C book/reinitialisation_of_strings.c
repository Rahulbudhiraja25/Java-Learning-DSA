#include<stdio.h>
int main()
{
// char ptr[]="Rahul Budhiraja"; ::-This can't be reinitialised
char *ptr="Rahul Budhiraja"; // This can be reinitialised
ptr="Rahul";
printf("%s",ptr);
return 0;
}