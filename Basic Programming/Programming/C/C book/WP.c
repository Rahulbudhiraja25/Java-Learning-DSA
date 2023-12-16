#include<stdio.h>     
int main(){  
int n,sum=0,c;    
printf("enter the number\n");    
scanf("%d",&n);    
while(n>0)    
{    
c=n%10;    
sum=sum*10+c;    
n=n/10;    
}    
n=sum;    
while(n>0)    
{    
c=n%10;    
switch(c)    
{    
case 1:    
printf("one ");    
break;    
case 2:    
printf("two ");    
break;    
case 3:    
printf("three ");    
break;    
case 4:    
printf("four ");    
break;    
case 5:    
printf("five ");    
break;    
case 6:    
printf("six ");    
break;    
case 7:    
printf("seven ");    
break;    
case 8:    
printf("eight ");    
break;    
case 9:    
printf("nine ");    
break;    
case 0:    
printf("Zero ");    
break;    
default:    
printf("Error!");    
break;    
}    
n=n/10;    
}    
return 0;  
}  