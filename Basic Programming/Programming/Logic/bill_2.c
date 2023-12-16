#include <stdio.h>
#include <stdlib.h>

struct details
{
    char item_name[30];
    int quantity;
    int price;
    int total;
};

struct details e[500];
int main()
{
    int n;
    // int ft;
    printf("Enter the number of item\n");
    scanf("%d", &n);
    fflush(stdin);
    for (int i = 1; i <= n; i++)
    {

        printf("Enter the item name \n");
        scanf("%s", &e[i].item_name);
        fflush(stdin);
        printf("Enter the quantity \n");
        scanf("%d", &e[i].quantity);
        fflush(stdin);
        printf("Enter the price \n");
        scanf("%d", &e[i].price);
        fflush(stdin);
        e[i].total = e[i].quantity * e[i].price;
    }
    system("cls");

    printf("******************BILL********************\n");
    printf("Item_no\tItem_name\tQuantity\tPrice\tTotal\n");
    printf("----------------------------------------------\n");
    for (int i = 1; i <= n; i++)
    {
        printf("     %d\t %s\t %d\t %d\t %d\t\n", i, e[i].item_name, e[i].quantity, e[i].price, e[i].total);
    }
    printf("----------------------------------------------\n");

    return 0;
}