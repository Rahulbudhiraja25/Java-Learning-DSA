#include<stdio.h>
int main()
{
int stud[4][2];
int i,j;
for(int i=0;i<=3;i++){

    printf("enter roll no and marks\n");
    scanf("%d %d",&stud[i][0],&stud[i][1]);
}
for(int i=0;i<=3;i++){

    // printf("enter roll no and marks\n");
    printf("%d %d",stud[i][0],stud[i][1]);
}
return 0;
}