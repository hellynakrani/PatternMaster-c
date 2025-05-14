/*
      A
    B A B
  C B A B C
D C B A B C D
  C B A B C
    B A B
      A
*/
#include <stdio.h>
int main()
{
    int c, r, n, s;
    printf("Enter the number:");
    scanf("%d", &n);
    for (r = 65; r <= n; r++)
    {
        for (s = r; s < n; s++)
        {
            printf("  ");
        }
        for (c = r; c >= 65; c--)
        {
            printf("%c ", c);
        }
        for (c = 66; c <= r; c++)
        {
            printf("%c ", c);
        }
        printf("\n");
    }
    for (r = n-1; r >= 65; r--)
    {
        for (s = r; s < n; s++)
        {
            printf("  ");
        }
        for (c = 65; c <= r; c++)
        {
            printf("%c ", c);
        }
        for (c = r; c >= 66; c--)
        {
            printf("%c ", c);
        }
        printf("\n");
    }
    return 0;
}