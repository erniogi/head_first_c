/*カードの値を評価する */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char card_name[3];
    puts("Enter Card Name");
    scanf("%2s", card_name);
    int val = 0;
    if (card_name[0] == 'K')
    {
        val = 10;
    }
    else if (card_name[0] == 'Q')
    {
        val = 10;
    }
    else if (card_name[0] == 'J')
    {
        val = 10;
    }
    else if (card_name[0] == 'A')
    {
        val = 11;
    }
    else
    {
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