#include <stdio.h>

int main()
{
    int a[10][10], row, col, i, j, largest;

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

    largest = a[0][0];

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            if(a[i][j] > largest)
            {
                largest = a[i][j];
            }
        }
    }

    printf("The largest element is: %d", largest);

    return 0;
}