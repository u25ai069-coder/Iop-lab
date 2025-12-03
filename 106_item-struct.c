// to generate a struct with info about an item

#include <stdio.h>
#include <string.h>

typedef struct
{
    char item_name[100];
    int quantity;
    int prize;
    int amount;
}item ;

int main()
{
    int n;
    printf("Enter no of items: ");
    scanf("%d", &n);
    getchar();

    item a[n];
    for (int i=0; i<n; i++)
    {
        printf("Enter item name: ");
        fgets(a[i].item_name, 100, stdin);

        printf("Enter prize: ");
        scanf("%d", &a[i].prize);

        printf("Enter quantity: ");
        scanf("%d", &a[i].quantity);
        getchar();

        a[i].amount = a[i].prize * a[i].quantity;
        printf("Amount = %d\n", a[i].amount);
    }
}
