#include <stdio.h>
int main() {
    int num,a;
    int count=0;
    printf("enter a number:");
    scanf("%d",&num);
    while (num>0)
    {
    a=num%2;
    count+=a;
    num/=2;
    }
    printf("number of 1s in binary representation is: %d \n",count);
 
return 0;
}