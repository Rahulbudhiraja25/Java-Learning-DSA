#include <iostream>
using namespace std;
int main()
{
    int n;
    printf("Enter the number of lines you want to print\n");
    scanf("%d", &n);
    for (int i = 0; i < n-1; i++)
    {
        for (int j=0;j<2*n-1;j++){
            printf("*");
        }
    }

    return 0;
}
