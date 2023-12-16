#include<stdio.h>
#include<conio.h>
int main()
{
int i=2;
int *x=&i;
int *y=&i;
if(x==y){
    printf("Equal \n");
}else
    printf("Not Equal \n");
printf("One more \n");
int j=5;
int k=5;

int *l=&j;
int *n=&k;
if(l==n){
    printf("Equal \n");
}else
    printf("Not Equal \n");
return 0;
}