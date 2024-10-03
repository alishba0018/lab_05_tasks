
#include <stdio.h>

int main() {
    int a;
    int b;
    
    printf("before swapping: \n" );
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    
    printf("after swapping: \n" );
    printf("a: %d \n",a);
    printf("b: %d \n",b);

    return 0;
}