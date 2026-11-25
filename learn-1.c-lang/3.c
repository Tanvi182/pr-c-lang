#include<stdio.h>
int main(){
    int first, second;
    printf("Enter first angle:");
    scanf("%d", &first);
    printf("Enter second angle: ");
    scanf("%d", &second);

    int third = 180 - (first + second);
    printf("Third angle is: %d\n", third);

    return 0;
}