#include<stdio.h>
int lencal(char *st){
    char *ptr=st;
int len=0;
while(*ptr!='\0'){
len++;
ptr++;

}
return len;
}
int main()
{
char string[]="Rahul";
int l=lencal(string);
printf("The length of string is %d",l);

return 0;
}