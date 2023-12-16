#include<stdio.h>
#include<conio.h>
int main()
{
int no_sub=3;
int no_std=4;
int marks[no_sub][no_std];
for(int i=0;i<no_sub;i++){
for(int j=0;j<no_std;j++){
printf("Enter the marks of %d student in %d subject \n",i+1,i+1);
scanf("%d",&marks[i][j]);
}
}    

for(int i=0;i<no_sub;i++){
for(int j=0;j<no_std;j++){
printf("The marks of %d student in %d subject is %d \n",i+1,i+1,marks[i][j]);
}
}    

return 0;
}