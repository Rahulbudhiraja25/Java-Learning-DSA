#include<stdio.h>
int add(int a,int b);
int main(){
int x, r,y;
printf("Enter the value of x and y" );
scanf("%d %d",&x,&y);
r=add(x,y);
printf("%d",r);
return 0;
}

int add(int a,int b){

    int result;
    result =a+b;
    return result;
}