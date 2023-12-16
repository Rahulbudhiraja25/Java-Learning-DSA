#include<stdio.h>
void encrypt(char *st){
char *ptr=st;
while(*ptr!='\0'){
*ptr=*ptr+1;
ptr++;
}
}
int main()
{
char *string;
printf("Enter the Message you want to convert\n");
gets(string);
encrypt(string);
printf("Encrypted string is %s",string);
return 0;
}