#include<stdio.h>
int main()
{
    int number=45;
FILE *ptr;
ptr=fopen("Genrated.txt","w");
fprintf(ptr,"The number is %d\n",number);
fprintf(ptr,"Thanks for using fprintf\n",number);
fclose(ptr);
return 0;
}