/*カードの値を評価する */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char card_name[3];
    int count = 0;
    do
    {
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
        case 'X':
            continue;
        default:
            val = atoi(card_name);
            if ((val > 10) || (val < 1))
            {
                puts("Error!");
                continue;
            }
        }
        /* check num in 3to6 or not */
        if ((val > 2) && (val < 7))
        {
            count++;
        }
        else if (val == 10)
        {
            count--;
        }
        printf("Count is:%i\n", count);
    } while (card_name[0] != 'X');
    return 0;
}