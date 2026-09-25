#include <stdio.h>
int main()
{
    int op, acc;

   /* 1: Bank inquiry
      2: Cash Withdrawl
      3: Cash Deposit
      4: PIN Change */
    printf("Enter operation: ");
    scanf("%d", &op);

    switch(op)
    {
        case 1:
            printf("Balance Inquiry\n");
// 1 for saving account. 2 for current account
            printf("Enter account type: ");
            scanf("%d", &acc);

            switch(acc)
            {
                case 1:
                    printf("Balance Inquiry of Savings Account");
                    break;

                case 2:
                    printf("Balance Inquiry of Current Account");
                    break;

                default:
                    printf("Invalid Account");
            }
            break;

        case 2:
            printf("Cash Withdrawal\n");

           // 1 for saving account. 2 for current account
            printf("Enter account type: ");
            scanf("%d", &acc);

            switch(acc)
            {
                case 1:
                    printf("Cash Withdrawal from Savings Account");
                    break;

                case 2:
                    printf("Cash Withdrawal from Current Account");
                    break;

                default:
                    printf("Invalid Account");
            }
            break;

        case 3:
            printf("Cash Deposit\n");

           // 1 for saving account. 2 for current account
            printf("Enter account type: ");
            scanf("%d", &acc);

            switch(acc)
            {
                case 1:
                    printf("Cash Deposit in Savings Account");
                    break;

                case 2:
                    printf("Cash Deposit in Current Account");
                    break;

                default:
                    printf("Invalid Account");
            }
            break;

        case 4:
            printf("PIN Change\n");

            // 1 for saving account. 2 for current account
            printf("Enter account type: ");
            scanf("%d", &acc);

            switch(acc)
            {
                case 1:
                    printf("PIN Change of Savings Account");
                    break;

                case 2:
                    printf("PIN Change of Current Account");
                    break;

                default:
                    printf("Invalid Account");
            }
            break;

        default:
            printf("Invalid Operation");
    }

    return 0;
}
