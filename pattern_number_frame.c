/*  
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
*/
#include<stdio.h>
void main()
{
	int r,c,n,k;
	printf("Enter the Number: ");
	scanf("%d",&n);
	for(r=n;r>=1;r--)
	{
		for(c=n;c>=r;c--)
		{
			printf("%d ",c);
		}
		for(c=1;c<r;c++)
		{
			printf("%d ",r);
		}
		for(c=2;c<=r;c++)
		{
			printf("%d ",r);
		}
		for(c=r+1;c<=n;c++)
		{
			printf("%d ",c);
		}
		printf("\n");
	}
	for(r=2;r<=n;r++)
	{
		for(c=n;c>=r;c--)
		{
			printf("%d ",c);
		}
		for(c=1;c<r;c++)
		{
			printf("%d ",r);
		}
		for(c=2;c<=r;c++)
		{
			printf("%d ",r);
		}
		for(c=r+1;c<=n;c++)
		{
			printf("%d ",c);
		}
		printf("\n");
	}
}
