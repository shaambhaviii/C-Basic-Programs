//Program Name: Multiplication of two numbers
// Part of shamv's C program
#include<stdio.h>
int main(){
    int a,b,mul;
    printf("enter two no.(with space between them): ");
    scanf("%d %d",&a,&b);
    mul = a * b;
    printf("Product of %d and %d is %d",a,b,mul);
    return 0;
}
