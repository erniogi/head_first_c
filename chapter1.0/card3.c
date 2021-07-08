/*カードの値を評価する */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char card_name[3];
    puts("Enter Card Name");
    scanf("%2s", card_name);
    int val = 0;
    switch (card_name[0])
    {
    case 'K':
    case 'Q':
    case 'J':
        val = 10;
        break;
    case 'A':
        val = 11;
        break;
    default:
        val = atoi(card_name);
    }
    /* check num in 3to6 or not */
    if ((val > 2) && (val < 7))
    {
        puts("Add count");
    }
    else if (val == 10)
    {
        puts("Take count");
        return 0;
    }
}