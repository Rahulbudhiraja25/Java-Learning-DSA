#include<stdio.h>
#include<conio.h>
int main()
{
int nstd=10;
int marks[10];
for(int i=0;i<nstd;i++){
printf("Enter the marks of %d student\n",i+1);
scanf("%d",&marks[i]);
}
int *ptr=marks;
printf("The marks of ist student is %d\n",*(ptr));
printf("The marks of 3rd student is %d\n",*(ptr+2));
if(*(ptr+2)==marks[2]){
    printf("These points to the same location\n");
}else
 printf("These do not points to the same location\n");
return 0;
}