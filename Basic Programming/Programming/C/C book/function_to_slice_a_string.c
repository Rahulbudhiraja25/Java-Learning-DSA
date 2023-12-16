#include<stdio.h>
void slice(char *st,int m,int n){
int i=0;
while((m+i)<n){
st[i]=st[i+m];
i++;
}
st[i]='\0';
}
int main()
{
char st[]="Rahulbudhiraja";
slice(st,2,8);
printf("The value of string is %s\n",st);
return 0;
}