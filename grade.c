#include<stdio.h>
int main(){
    int outOf = 100, sub1, sub2, sub3, sub4, sub5;

    printf("Enter the values of all subject: ");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);

    int sum = sub1 + sub2 + sub3 + sub4 + sub5;

    int average = sum/outOf;
    printf("Average of all subjects are %d\n", average);

    return 0;
}