#include<stdio.h>
int main()
{
int num;
printf("Enter the integer \n");
scanf("%d",&num);

FILE *ptr;
ptr=fopen("Table.txt","w");
for(int i=0;i<10;i++){

fprintf(ptr,"%d*%d=%d\n",num,i+1,num*(i+1));
}
fclose(ptr);
printf("Successfully genrated table of %d\n",num);
return 0;
}