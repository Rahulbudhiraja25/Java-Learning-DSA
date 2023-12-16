#include<stdio.h>
void xstrcpy(char *target,char *source){
while(*source!='\0'){
*target=*source;
target++;
source++;
}
// target='\0';
}
int main()
{
char source[]="Rahul";
char target[30];
xstrcpy(target,source);
printf("Now the target is %s",target);
return 0;
}