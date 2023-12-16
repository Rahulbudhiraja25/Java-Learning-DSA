#include<stdio.h>
#include<conio.h>
void areaperm(int ,float *,float *);
int main()
{int r;
float area,per;
printf("Enter the radius\n");
scanf("%d",&r);
areaperm(r,&area,&per);
printf("Area=%f\n",area);
printf("Perimeter=%f\n",per);

return 0;
}void areaperm(int r,float *a,float *p){
*a=3.14*r*r;
*p=2*3.14*r;
}