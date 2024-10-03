#include <stdio.h>

int main() {
    int number;
    printf("Enter Number: ");
    scanf("%d",&number);
    if (number<0)
       printf("negative number entered \n");
    else if (number>0){
       printf("positive number entered \n");
       if (number %2 == 0)
       printf("even number \n");
       else
       printf("odd number \n");
    }   
    else
       printf("zero entered");
       
       
    

    return 0;
}