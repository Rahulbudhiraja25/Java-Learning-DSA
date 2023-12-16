#include<stdio.h>
int main()
{
    int a,b,c,d;
FILE *ptr;
ptr=fopen("Ketan.txt","r");
fscanf(ptr,"%d %d %d %d",&a,&b,&c,&d);
fclose(ptr);
printf("%d %d %d %d",a,b,c,d);
return 0;
}