#include <stdio.h>

int main() {
    int a,b,c;
    
    printf("enter num1:");
    scanf("%d",&a);
    printf("enter num2:");
    scanf("%d",&b);
    printf("enter num3:");
    scanf("%d",&c);
    if(a>b && a>c)
    printf("the greatest num is: %d", a);
    else if(b>a && b>c)
    printf("the greatest num is: %d", b);
    else if(c>a && c>b)
    printf("the greatest num is: %d", c);
    
return 0;
}