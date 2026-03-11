#include <stdio.h>

int main()
{
    int a[10][10], i, j, row, col;

    printf("Enter the array row size: ");
    scanf("%d", &row);

    printf("Enter the array column size: ");
    scanf("%d", &col);

    printf("Enter the array elements:\n");

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("The transpose matrix of an array:\n");

    for(i = 0; i < col; i++)
    {
        for(j = 0; j < row; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}