#include<stdio.h>
int main()
{
    int num=5501;
FILE *ptr;
ptr=fopen("zex.data","w");
fprintf(ptr,"%d is the number",num);
fclose(ptr);
return 0;
}