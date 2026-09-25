#include <stdio.h>
int main() {
    int app, doc, reg;

    printf("Do you have an appointment (1/0): ");
    scanf("%d", &app);

    if (app == 1)
    {
        printf("Is doctor available (1/0): ");
        scanf("%d", &doc);

        if (doc == 1)
        {
            printf("Have your registration completed (1/0): ");
            scanf("%d", &reg);

            if (reg == 1)
            {
                printf("Patient can meet the doctor");
            }
            else
            {
                printf("Registration not completed");
            }
        }
        else
        {
            printf("Doctor is not available");
        }
    }
    else
    {
        printf("No appointment");
    }

    return 0;
}
