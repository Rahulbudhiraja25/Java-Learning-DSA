#include <stdio.h>
void pmt(int *MulTable, int num)
{
    for (int i = 0; i < 10; i++)
    {
        MulTable[i] = num * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%dX%d=%d\n", num, i + 1, MulTable[i]);
    }
    printf("***************************\n\n");
}

int main()

{
    int numb;

    printf("Enter the numbers of table you want to print\n");
    scanf("%d", &numb);

    int MulTable[numb][10];

    for (int i = 0; i < numb; i++)
    {
        int tabnum;
        printf("Enter the number whose table you want to be printed\n");
        scanf("%d", &tabnum);
        printf("Table of %d is :\n", tabnum);
        pmt(MulTable[i], tabnum);
    }
    return 0;
}
