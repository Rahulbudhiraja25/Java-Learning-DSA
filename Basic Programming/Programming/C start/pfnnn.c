#include <stdio.h>
int main()
{
    int i = 1,z;
printf("Enter the number of natural number you want to print\n");
scanf("%d",&z);
    do
    {
        printf("%d\n", i);
        i++;
    }
    while(i<=z);
        return 0;
    }