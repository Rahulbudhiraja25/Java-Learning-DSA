#include<stdio.h>

int main(){
 int p,t;
 float si ,r;   
printf("Enter the value of principal rate and time\n");
scanf("%d %f %d",&p,&r,&t);

si=p*r*t/100;
printf("The value of si is %f\n",si);
    return 0;
}