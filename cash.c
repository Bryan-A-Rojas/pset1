#include <cs50.h>
#include <stdio.h>
#include <math.h>


int main(void)
{
    float change = get_float("Change for how much: ");
    int cents = round(change * 100);
    int coins = 0;
    
    int USCoins[4] = { 25, 10, 5, 1 };
    int length = sizeof(USCoins) / sizeof(int);
    
    for(int i = 0; i < length; i++) {
        coins += cents / USCoins[i];
        cents = cents % USCoins[i];
    }

    printf("Coins: %i\n", coins);
}

