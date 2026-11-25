#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int row_id, col_id;
    int row_sum = 0, col_sum = 0;

    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int a[rows][cols];

    printf("Enter array's elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter row number: ");
    scanf("%d", &row_id);

    printf("Elements of row %d: ", row_id);
    for (j = 0; j < cols; j++) {
        printf("%d", a[row_id][j]);
        row_sum += a[row_id][j];
        if (j < cols - 1) printf(", ");
    }
    printf("\nThe sum of a row %d: %d\n", row_id, row_sum);

    printf("\nEnter column number: ");
    scanf("%d", &col_id);

    printf("Elements of column %d: ", col_id);
    for (i = 0; i < rows; i++) {
        printf("%d", a[i][col_id]);
        col_sum += a[i][col_id];
        if (i < rows - 1) printf(", ");
    }
    printf("\nThe sum of column %d: %d\n", col_id, col_sum);

    return 0;
}