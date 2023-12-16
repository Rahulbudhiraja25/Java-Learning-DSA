#include<stdio.h>
#include<conio.h>
int main()
{
int t=1;
char h;
while(t<=24){
if(t<12){
printf("%d AM \n",t);
}
if(t==12){
printf("%dPM -Noon\n",t);
}
if(t>12&&t<24){
printf("%d PM \n",t);    
}
if(t==24){
    printf("%d AM -Midnight \n",t);
}


t++;
}
return 0;
}