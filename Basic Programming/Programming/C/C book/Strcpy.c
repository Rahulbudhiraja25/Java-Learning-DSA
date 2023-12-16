#include<stdio.h>
#include <string.h>
int main()
{
char source[]="Rahul";
char target[30];
strcpy(target,source);
printf("Now the target is %s",target);
return 0;
}