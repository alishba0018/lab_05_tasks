#include <stdio.h>

int main() {
    int number;
    printf("Enter Number: ");
    scanf("%d",&number);
    if (number%3 ==0 && number %5 ==0)
       printf("number is divisible by both 3 and 5 \n");
    else 
       printf("number is not divisible by both 3 and 5 \n");
       
       
    

    return 0;
}