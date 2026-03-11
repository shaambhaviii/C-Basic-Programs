#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter value for a:");
    scanf("%d",&a);
    printf("enter value for b:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;// here no third variable is used for swappping,used basic mathematics to manipulate the values for  a & b
    printf("Swapped values of a & b are: %d & %d", a,b);
    return 0;
}
