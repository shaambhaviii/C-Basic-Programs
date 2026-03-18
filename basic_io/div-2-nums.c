//Program Name: Division of two numbers
//Part of shmav's C programs
#include<stdio.h>
int main(){
    int a,b,div,mod;
    printf("enter two no.(with space between them): ");
    scanf("%d %d",&a,&b);
    div = a / b;
    mod = a % b;
    printf("Quotient of %d divided by %d is %d",a,b,div);
    printf("\nRemainde when %d is divided by %d is %d", a,b,mod);
    return 0;
}
