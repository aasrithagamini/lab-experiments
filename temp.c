#include<stdio.h>
int main(){
    int choice;
    float celsius,fahrenheit;
    printf("\n 1.celsius to fahrenheit");
    printf("\n 2.fahrenheit to celsius");
    printf("choice (1 or 2):");
    scanf("%d",&choice);
    if(choice==1){
        printf("\n enter the temperature in celsius:");
        scanf("%f",&celsius);
        fahrenheit=celsius*9/5+32;
        printf("\n %.2f celsius=%.2f fahrenheit",fahrenheit,celsius);
    }
    else if(choice==2){
        printf("\n enter the temperature in fahrenheit:");
        scanf("%f",&fahrenheit);
        celsius=(fahrenheit-32)*5/9;
        printf("\n %.2f fahrenheit=%.2f celsius",fahrenheit,celsius);
    }
    else{
        printf("\n invalid choice");
    }
}