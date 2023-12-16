#include<stdio.h>
#include<conio.h>
int main()
{
    int p,t,time;
    float si,r;

time=1;
    while(time<=3){
     printf("Enter the Value of principle\n");
     scanf("%d",&p);

     printf("Enter the Value of rate\n");
     scanf("%f",&r);

     printf("Enter the time (in years)\n");
     scanf("%d",&t);
     si=p*r*t;
     printf("Si is %f\n",si);
     time++;

    }

return 0;
}