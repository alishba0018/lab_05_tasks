#include <stdio.h>

int main() {
    int a;
    printf("enter a:");
    scanf("%d",&a);
    
    a>0 ? printf("a is positive \n"):(a<0? printf("a is negative"):printf("a is zero"));
    
    

    return 0;
}