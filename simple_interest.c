#include<stdio.h>
int main(){
    float principal,rate,time,simple_interest;
    printf("enter principal amount:");
    scanf("%f",&principal);
    printf("enter rate interest (in %%):");
    scanf("%f",&rate);
    printf("enter time period(in years):");
    scanf("%f",&time);
    simple_interest=(principal*rate*time)/100;
    printf("simple_interest=%.2f\n",simple_interest);
}