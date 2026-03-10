// gross salary = hra + da + ta / bs * 100
#include <stdio.h>
int main(){
    int bs, hra, da, ta;
    printf("Enter basic salary: ");
    scanf("%d", &bs);
    printf("Enter HRA: ");
    scanf("%d", &hra);
    printf("Enter DA: ");
    scanf("%d", &da);
    printf("Enter TA: ");
    scanf("%d", &ta);

    int gross_salary = bs + hra +da +ta ;
    printf("Gross Salary is: %d\n", gross_salary);
    return 0;
}