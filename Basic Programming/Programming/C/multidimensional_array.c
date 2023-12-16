#include<stdio.h>
int main(){
int no_sub=5;
int no_std=3;
int marks[no_sub][no_std];
for(int j=0;j<no_std;j++){
for(int i=0;i<no_sub;i++){
printf("Enter the marks of %d student in %d subject \n",j+1,i+1);
scanf("%d",&marks[i][j]);
}
}

for(int j=0;j<no_std;j++){
for(int i=0;i<no_sub;i++){
printf("The marks of %d student in %d subject is %d \n",j+1,i+1,marks[i][j]);
}
}

return 0;
}