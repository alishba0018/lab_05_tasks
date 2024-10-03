#include <stdio.h>

int main() {
    int age;
    printf("Enter Age: ");
    scanf("%d",&age);
    if (age<=12)
       printf("child");
    else if (age<=19)
       printf("teenager");
    else if (age<=59)
       printf("adult");
    else if (age<=105)
       printf("senior");
    else
       printf("no one is living that long");
       
       
    

    return 0;
}