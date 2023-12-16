#include<stdio.h>
void Decrypt(char *st){
char *ptr=st;
while(*ptr!='\0'){
*ptr=*ptr-1;
ptr++;
}
}
int main()
{
char *string;
printf("Enter the secret message\n");
gets(string);
Decrypt(string);
printf("Decrypted string is %s",string);
return 0;
}