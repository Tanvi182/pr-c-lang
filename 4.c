#include <stdio.h>

int main()
{
    int a[10][10], i, j;
    int rows, cols;
    int row_no, col_no;
    int row_sum = 0, col_sum = 0;

    printf("Enter the array's row size: ");
    scanf("%d", &rows);

    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    printf("Enter array elements:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter row number: ");
    scanf("%d", &row_no);

    printf("Elements of row %d: ", row_no);

    for(j = 0; j < cols; j++)
    {
        printf("%d ", a[row_no][j]);
        row_sum += a[row_no][j];
    }

    printf("\nThe sum of a row %d: %d\n", row_no, row_sum);

    printf("Enter column number: ");
    scanf("%d", &col_no);

    printf("Elements of column %d: ", col_no);

    for(i = 0; i < rows; i++)
    {
        printf("%d ", a[i][col_no]);
        col_sum += a[i][col_no];
    }

    printf("\nThe sum of column %d: %d", col_no, col_sum);

    return 0;
}