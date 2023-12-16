#include <stdio.h>
int main()
{
    int std, sub;
    printf("Enter the number of students\n");
    scanf("%d", &std);
    printf("Enter the number of subjects\n");
    scanf("%d", &sub);

    int marks[std][sub];
    for (int i = 0; i < std; i++)
    {
        for (int j = 0; j < sub; j++)
        {
            printf("Enter the marks of %d student in %d subject\n", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    for (int i = 0; i < std; i++)
    {
        for (int j = 0; j < sub; j++)
        {
            printf("The marks of %d student in %d subject is %d\n", i + 1, j + 1, marks[i][j]);
        }
    }

    return 0;
}