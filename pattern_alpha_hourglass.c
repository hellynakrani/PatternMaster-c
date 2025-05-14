/*
      A
    A B
  A B C
A B C D 
  A B C
    A B
      A*/
 #include<stdio.h>
void main()
{
    int c,r,n,s;
    printf("Enter the number");
    scanf("%d",&n);
    for ( r = 65; r <= 65+n; r++)
    {
        for ( s = 65+n ; s >r ; s--)
        {
            printf("  ");
        }
        for ( c = 65; c <= r; c++)
        {
            printf("%c ",c);
        }
        printf("\n");
    }
     for ( r = n+65-1; r>=65 ; r--)
    {
        for ( s = 65+n ; s >r ; s--)
        {
            printf("  ");
        }
        for ( c = 65; c <= r; c++)
        {
            printf("%c ",c);
        }
        printf("\n");
    }
}