#include <stdio.h>
int main()
{
    int principal;
    float time, rate, si;

    printf("Enter the value of principal\n");
    scanf("%d", &principal);

    printf("Enter the value of rate\n");
    scanf("%f", &rate);

    printf("Enter the value of time\n");
    scanf("%f", &time);

    si = (principal * rate * time) / 100;
    printf("The simple interest is %f", si);
    return 0;
}
