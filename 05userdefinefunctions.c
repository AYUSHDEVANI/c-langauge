#include <stdio.h>

struct item
{
    char itemname[30];
    int quantity;
    float price, totalamount;
};

float gettotalamount(struct item);

int main()
{
    struct item IT;
    float tamount;

    printf("Enter item name (max 30 characters):");
    scanf("%[^\n]s", IT.itemname);

    printf("Enter price:");
    scanf("%f", &IT.price);

    printf("Enter quantity:");
    scanf("%d", &IT.quantity);

    tamount = gettotalamount(IT);

    printf("Item name: %s\nprice: %f\nquantity: %d\n", IT.itemname, IT.price, IT.quantity);
    printf("\ntotal price of all quantity %f\n", tamount);
    return 0;
}

float gettotalamount(struct item item)
{

    item.totalamount = item.price * (float)item.quantity;
    return (item.totalamount);
}