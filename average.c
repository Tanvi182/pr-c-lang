#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of an array: ");
    scanf("%d", &size);

    int arrA;
    printf("Enter the elements of array A: ");
    scanf("%d", &arrA);

    int arrB;
    printf("Enter the elements of array B: ");
    scanf("%d", &arrB);

    int sum;
    sum = arrA + arrB;

    float average = (float)sum/size;
    printf("Average of all in 2d array: ");
    scanf("%.2f", &average);
    return 0;
}