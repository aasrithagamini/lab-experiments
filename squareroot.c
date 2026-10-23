#include<stdio.h>
#include<math.h>
int main(){
    float principal,rate,time,compound_interest,amount;
    printf("enter principal amount:");
    scanf("%f",&principal);
    printf("enter annual rate of interest (in %%):");
    scanf("%f",&rate);
    printf("enter time period(in years):");
    scanf("%f",&time);
    amount=principal*pow((1+rate/100),time);
    compound_interest=amount-principal;
    printf("\ntotal amount=%.2f",amount);
    printf("simple_interest=%.2f\n",compound_interest);
}