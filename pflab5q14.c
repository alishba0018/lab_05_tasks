#include <stdio.h>

int main() {
    float age,monthly_income,credit_score;
    
    printf("enter age:");
    scanf("%f",&age);
    printf("enter monthly_income:");
    scanf("%f",&monthly_income);
    printf("enter credit_score:");
    scanf("%f",&credit_score);
    if((age>=21 && age<=60) && (monthly_income<=40000) && (credit_score>=720 && credit_score<=750))
    printf("you're eligible for a loan");
    else 
    printf("you're ineligible for a loan");
    
return 0;
}