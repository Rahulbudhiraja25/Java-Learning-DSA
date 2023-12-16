#include <stdio.h>
void revar(int *marks, int nt);
int main()
{
    int n;
    printf("Enter the number of variables you want to store in an array\n");
    scanf("%d", &n);
    int marks[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d term of the array\n", i + 1);
        scanf("%d", &marks[i]);
    }
    revar(marks, n);
    // for(int i=0;i<n;i++){
    // printf("The %d term of array is %d\n",i+1,marks[i]);
    // }

    return 0;
}
void revar(int *marks, int nt)
{
    int temp;
    for (int i = 0; i < (nt / 2); i++)
    {
        temp = marks[i];
        marks[i] = marks[nt - i - 1];
        marks[nt - i - 1] = temp;
    }
    for (int i = 0; i < nt; i++)
    {
        printf("The %d term of array is %d\n", i + 1, marks[i]);
    }
}