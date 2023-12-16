#include<stdio.h>
int main()
{
    char c;
FILE *ptr1;
FILE *ptr2;
ptr1=fopen("a.txt","r");
ptr2=fopen("b.txt","w");
c=fgetch(ptr1,"%c");
while(c!=EOF){
fputc(ptr2,"%c",c);
fputc(ptr2,"%c",c);
}

return 0;
}