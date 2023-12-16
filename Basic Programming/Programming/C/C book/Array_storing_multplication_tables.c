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
    int MulTable[3][10];
    printf("Table of 2 is :\n");
    pmt(MulTable[0], 2);
    printf("Table of 7 is :\n");
    pmt(MulTable[1], 7);
    printf("Table of 9 is :\n");
    pmt(MulTable[2], 9);

    return 0;
}

// for(int i=0;i<10;i++){
// MulTable[0][i]=5*(i+1);
// }
// for(int i=0;i<10;i++){
// printf("%dX%d=%d\n",5,i+1,MulTable[0][i]);
// }
