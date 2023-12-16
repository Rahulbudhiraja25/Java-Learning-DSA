#include<stdio.h>
#include<conio.h>
void display(int marks[],int nstd,int nsub){
    for(int i=0;i<nstd;i++){
for(int j=0;j<nsub;j++){
printf("The marks of %d student in %d subject is %d \n",i+1,j+1,marks[i]);
}
}
}
int main()
{
int std=5;
int sub=3;
int marks[std][sub];
for(int i=0;i<std;i++){
for(int j=0;j<sub;j++){
printf("Enter the marks of %d student in %d subject \n",i+1,j+1);
scanf("%d",&marks[std][sub]);
}
}
display(marks,std,sub);
return 0;
}