#include <stdio.h>

int main() {
    int num,a;
    int sum=0;
    printf("enter a number:");
    scanf("%d",&num);
    do
    { 
    a=num%10;
    num=num/10;
    sum=sum+a;
    }
    while(num!=0);
    printf("the sum of digits is: %d", sum);

    return 0;
    }