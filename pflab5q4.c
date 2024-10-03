#include <stdio.h>

int main() {
    int age;
    char citizenship[30];
    //int is_citizen = (citizenship[0] == 'y' || citizenship[0] == 'Y');
    printf("Enter Age: ");
    scanf("%d",&age);
    printf("Are you a citizen? (yes/no): ");
    scanf("%s",&citizenship);
    
    
    
    if (age>=18 && (citizenship[0] == 'y' || citizenship[0] == 'Y'))
       printf("you are eligible to vote\n");
    else 
       printf("you are ineligible to vote \n");
       
       
    

    return 0;
}