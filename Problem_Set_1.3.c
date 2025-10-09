#include <cs50.h>
#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    int penny = 1;
    int quarters = 25;
    int dimes = 10;
    int nickels = 5;

    bool stopmywhile = false;
    int userinput = 0;
    int change = 0;
    int TotalCoins = 0;

    while (userinput <= 0)
    {
        userinput = get_int("Change owed: ");
    }
    change = userinput;

    if (userinput >= quarters)
    {
        TotalCoins += change / quarters;
        change = change % quarters;
    }

    if (userinput >= dimes)
    {
        TotalCoins += change / dimes;
        change = change % dimes;
    }

    if (userinput >= nickels)
    {
        TotalCoins += change / nickels;
        change = change % nickels;
    }

    if (userinput >= penny)
    {
        TotalCoins += change / penny;
        change = change / penny;
    }

    printf("%i\n", TotalCoins);
}
