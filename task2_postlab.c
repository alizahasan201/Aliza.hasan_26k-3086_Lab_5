#include <stdio.h>

int main() {

    int bal;

    printf("Enter your Account Balance: ");
    scanf("%d", &bal);

    if (bal < 500)
    {
        printf("LOW BALANCE");
    }

    else if (bal >= 500 && bal <= 2000)
    {
        printf("SUFFICIENT BALANCE");
    }

    else
    {
        printf("PREMIUM BALANCE");
    }

    return 0;
}
