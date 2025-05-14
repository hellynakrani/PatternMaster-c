/*
1 2 3 4
1 2 3
1 2
1
1 2
1 2 3
1 2 3 4*/
#include <stdio.h>
void main()
{
    int c, r, n;
    printf("Enter the number:");
    scanf("%d", &n);
    for (r = n; r >= 1; r--)
    {
        for (c = 1; c <= r; c++)
        {
            printf("%d", c);
        }
        printf("\n");
    }
    for (r = 1; r <= n; r++)
    {
        for (c = 2; c <= r; c++)
        {
            printf("%d", c);
        }
        printf("\n");
    }
}