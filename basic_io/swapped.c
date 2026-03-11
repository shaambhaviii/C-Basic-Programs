#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter value for a:");
    scanf("%d",&a);
    printf("enter value for b:");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    //this swap is done using third variable
    printf("Swapped values of a & b are: %d & %d", a,b);
    return 0;
}
