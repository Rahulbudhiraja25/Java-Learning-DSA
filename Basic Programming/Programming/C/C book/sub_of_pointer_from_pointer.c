#include<stdio.h>
#include<conio.h>
int main()
{
int i=2;
int j=3;
int *ptri=&i;
// ptri++;
int *ptrj=&j;
printf("The value of ptr i is %u\n The value of ptr j is %u\n",ptri,ptrj);
int *c=ptri-ptrj;
printf("The diffrance b/w two pointers is %u\n",c);
return 0;
}