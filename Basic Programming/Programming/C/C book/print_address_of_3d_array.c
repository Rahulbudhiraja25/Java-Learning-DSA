#include <stdio.h>
int main()
{
    int array[3][4][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                printf("The address of arr[%d][%d][%d]is %u\n", i, j, k, &array[i][j][k]);
            }
        }
    }

    return 0;
}