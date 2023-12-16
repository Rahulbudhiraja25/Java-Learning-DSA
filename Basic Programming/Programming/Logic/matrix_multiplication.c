//multiply two matrices

#include<stdio.h>
int main()
{
    int r,c;
printf("Enter the number of rows in your matrix\n");
scanf("%d",&r);
printf("Enter the number of coloums in your matrix\n");
scanf("%d",&c);
int m1[r][c];
int m2[r][c];
int m3[r][c];
for(int i=0;i<r;i++)
for(int j=0;j<c;j++){
printf("Enter the element e%d%d of ist matrix:\n",i+1,j+1);
scanf("%d",&m1[i][j]);
}

for(int i=0;i<r;i++)
for(int j=0;j<c;j++){
printf("Enter the element e%d%d of 2nd matrix:\n",i+1,j+1);
scanf("%d",&m2[i][j]);
}

for(int i=0;i<r;i++){
for(int j=0;j<c;j++){
m3[i][j]=m1[i][j]*m2[i][j];

printf("%d\t",m3[i][j]);
}
printf("\n");
}
return 0;
}