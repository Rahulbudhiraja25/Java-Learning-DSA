#include<stdio.h>
#include<string.h>
int main()
{
char source[]="Sayonara",target[20];
strcpy(target,source);
printf("The source is %s\n",source);
printf("The target is %s\n",target);
return 0;
}