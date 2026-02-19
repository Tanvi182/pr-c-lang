#include<stdio.h>
int main(){
    int arrNum;
    printf("Enter the elements of an array: ");
    scanf("%d", &arrNum);

    for(int i=0; i <= arrNum; i++){
        i % 2 != 0;
        printf("Odd elements of %d are %d: ", &arrNum, &i);
    }
    return 0;
}