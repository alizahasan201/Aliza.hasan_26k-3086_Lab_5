#include <stdio.h>
int main() {

    int resopen, item, bal;

    printf("Is the restaurant open (1/0): ");
    scanf("%d", & resopen);

    if (resopen == 1)
    {
        printf("Is the item available (1/0): ");
        scanf("%d", & item);

        if (item == 1)
        {
            printf("Is your balance sufficient (1/0): ");
            scanf("%d", & bal);

            if (bal == 1)
            {
                printf("Order placed successfully");
            }
            else
            {
                printf("Low balance");
            }
        }
        else
        {
            printf("Item is not available");
        }
    }
    else
    {
        printf("Restaurant is closed");
    }

    return 0;
}
