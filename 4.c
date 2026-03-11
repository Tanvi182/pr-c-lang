#include <stdio.h>

int main()
{
    int i,j,k;

    for(i=5;i>=1;i--)
    {
        // spaces for shifting right
        for(k=5;k>i;k--)
        {
            printf("  ");
        }

        // printing 1 and 0 pattern
        for(j=1;j<=i;j++)
        {
            if(j%2==1)
                printf("1 ");
            else
                printf("0 ");
        }

        printf("\n");
    }

    return 0;
}