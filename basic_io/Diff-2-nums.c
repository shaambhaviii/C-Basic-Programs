//Program name: Difference of two numbers
//Part of shamv's C programs
#include<stdio.h>
int main(){
    int a,b,diff;
    printf("enter two no.(with space between them): ");
    scanf("%d %d",&a,&b);
    diff = a - b;
    printf("Difference of %d and %d is %d",a,b,diff);
    return 0;
}
