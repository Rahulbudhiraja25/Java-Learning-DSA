//POINTER ARTHEMATIC

 #include<stdio.h>
 #include<conio.h>
  int main()
  {//EXAMPLE STARTS FROM HERE;
printf("Example Using Int\n");
//#Increment Case
int i=54;
 int *ptr=&i;
 printf("The Value Of Ptr Is %u\n",ptr);
 ptr=ptr+2;
 printf("The Value Of Ptr After Increment Is %u\n\n",ptr);
 //#Decrement Case
 printf("The Value Of Ptr Is %u\n",ptr);
 ptr=ptr-2;
 printf("The Value Of Ptr After decrement Is %u\n",ptr);
printf("\n**This clears that storage of integer is 4 bytes**\n ");
printf("Example Using char\n");
char c='A';
char *a=&c;
 printf("The Value Of Ptr Is %u\n",a);
    a++;
 printf("The Value Of Ptr After Increment Is %u\n",a);
printf("\n**This clears that storage of character is 1 bytes**\n ");
printf("Example Using Float\n");
float f=1.55;
float *ptrf=&f;
printf("The value of float pointer before increment is %u\n",ptrf);
ptrf++;
printf("The value of float pointer after increment is %u\n",ptrf);
printf("\n**This clears that storage of float is 4 bytes**\n ");
getch();
  return 0;
 }