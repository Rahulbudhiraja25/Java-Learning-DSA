#include<stdio.h>
#include<string.h>
int main()
{
char st1[35];
char st2[35];
char c;
int i=0;
printf("Enter the value of First string\n");
scanf("%s",&st1);
printf("Enter the value of string Character by chracter \n");
while(c!='\n'){
fflush(stdin);
scanf("%c",&c);
st2[i]=c;
i++;
}
st2[i-1]='\0';
printf("The value of first string is %s & The value of second string is %s\n",st1,st2);
printf("Strcmp for these strings returns %d\n",strcmp(st1,st2));
return 0;
}