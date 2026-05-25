

#include <stdio.h>

int checkBalance(int balance)
{
    return balance;
}

int withDraw(int amount)
{

    int remainBalance = checkBalance(10000);

    if (amount < remainBalance)
    {
        int balance = remainBalance - amount;
        return balance;
    }
    else
    {
        printf("\ninsufficient balance");
    }
}

int main()
{

    int checkRemainBalance = withDraw(5000);

    printf("\n the remain account balance is %d", checkBalance);

    return 0;
}