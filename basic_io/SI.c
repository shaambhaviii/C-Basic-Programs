//Program Name: Simple Interest calculation
//Part of shamv's C programs

#include<stdio.h>
int main(){
    int p,r,t,si,a;
    printf("enter Pricipal amount: Rs. ");
    scanf("%d",&p);
    printf("enter Rate of interest(%): ");
    scanf("%d",&r);
    printf("enter Time(in years): ");
    scanf("%d",&t);
    si = (p*r*t)/100;
    a= p + si;
    printf("Simple Interest (SI) is Rs. %d",si);
    printf("\nAmount is Rs. %d", a);
    return 0;
}
