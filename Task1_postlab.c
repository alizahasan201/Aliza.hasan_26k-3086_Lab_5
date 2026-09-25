#include <stdio.h>

int main() {

    float tem;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &tem);

    if (tem < 15)
    {
        printf("COLD");
    }

    else if (tem >= 15 && tem <= 30)
    {
        printf("NORMAL");
    }

    else
    {
        printf("HOTTTTT");
    }

    return 0;
}
