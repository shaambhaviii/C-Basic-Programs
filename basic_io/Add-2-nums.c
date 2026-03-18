//Program name : Addition of two numbers
// Part of shamv's C programs

#include<stdio.h>
int main(){
    int a,b,sum;
    printf("enter two no.(with space between them): ");
    scanf("%d %d",&a,&b);
    sum = a + b;
    printf("Sum of %d and %d is %d",a,b,sum);
    return 0;
}
