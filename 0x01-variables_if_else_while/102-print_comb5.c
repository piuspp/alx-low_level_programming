#include <stdio.h>

/**
 * main - entry point
 * return: always 0 (success)
 */

int main(void)
{
    int i, j, k, x;
     
    for (i = 0; i < 10; i++)
    {
    for (j = 0; j < 10; j++)
    {
    for (k = 0; k < 10; k++)
    {
    for (x = 0; x < 10; x++)
    {
       
        if (i > j | i == j | i > k | i == k | i > x )
        {
            continue;
        }
        if (j > k | j == k | j > x) 
        {
            continue;
        }
        if (k > x ) 
        {
            continue;
        }
    
    putchar(i + '0');
    putchar(j + '0');
    putchar(k + '0');
    putchar(x + '0');
            if (i != 7 | j != 8 | k != 9)
            {
                putchar(',');
                putchar(' '); 
    }       }
    }
    }
    }
    putchar('\n');
    return (0);
}
