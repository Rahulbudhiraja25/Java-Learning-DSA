#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
int x1,y1,r;

printf("Enter the value of Radius\n");
scanf("%d",&r);

printf("Enter the value of x1 & y1\n");
scanf("%d %d",&x1,&y1);

if(pow(x1,2)+pow(y1,2)-pow(r,2)<0)
printf("The point lies inside the circle\n");
else
printf("The point lies outside the circle\n");
return 0;
}



//  Formula_used: x12 + y12 – r2 < 0