/*
 * * * * * * * *
 *             *
 *             *
 *             *
 *             *
 *             *
 *             *
 * * * * * * * *
 */
#include <stdio.h>
void main()
{
    int r, c, n;
    printf("Enter the number:");
    scanf("%d", &n);
    for (r = 1; r <= n; r++)
    {
        for (c = 1; c <= n; c++)
        {
            if (r == 1 || r == n || c == 1 || c == n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}