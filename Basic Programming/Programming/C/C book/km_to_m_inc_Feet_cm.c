#include<stdio.h>
#include<conio.h>
int main(){
float km,m,inc,cm,feet;
printf("Enter the distance b/w two cities (inkm)\n");
scanf("%f",&km);
m=km*1000;
inc=km*39370.079;
cm=km*100000;
feet=km*3280.84;

printf("The distance in m is %f\n",m);
printf("The distance in inches is %f\n",inc);
printf("The distance in feet is %f\n",feet);
printf("The distance in cm is %f\n",cm);

return 0;
}