#include<stdio.h>
#include<conio.h>
//#include<math.h>
#include <stdlib.h>
int main()
{float r,g,b;
float w,c,m,y,bl,max;
printf("Enter the value of R,G,B(0to255)\n");
scanf("%f %f %f",&r,&g,&b);

if(r>=0&&r<=255&&g>=0&&g<=255&&b>=0&&b<=255)
{
if(r/255>g/255&&r/255>b/255){
w=r/255;
}
else if(g/255>r/255&&g/255>b/255){
w=g/255;}
else
w=b/255;

// w=max(r/255,g/255,b/255)

c=((w-g)/255)/w;
m=((w-g)/255)/w;
y=((w-b)/255)/w;
bl=1-w;

printf("The value of white is %f\n",w);

printf("The value of cyan is %f\n",c);

printf("The value of magenta is %f\n",m);

printf("The value of yellow is %f\n",y);

printf("The value of black is %f\n",bl);

}
else
exit(1);
return 0;
}