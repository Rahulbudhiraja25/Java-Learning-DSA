#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);

    printf("Answer is %d", a>>1);
    return 0;
}