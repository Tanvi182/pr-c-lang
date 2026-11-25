#include <stdio.h>

int main()
{
    int i,j,k;

    for(i=1;i<=5;i++)
    {
        // left numbers
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }

        // spaces in middle
        for(k=5;k>i;k--)
        {
            printf("  ");
        }

        // right numbers
        for(j=i;j>=1;j--)
        {
            printf("%d ",j);
        }

        printf("\n");
    }

    return 0;
}