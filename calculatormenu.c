#include<stdio.h>
int main(){
    double num1,num2,result;
    int choice;
    printf("enter two numbers:");
    scanf("%lf %lf",&num1,&num2);
    printf("\n calculator menu");
    printf("\n 1.addition");
    printf("\n 2.substraction");
    printf("\n 3.multiplication");
    printf("\n 4.division");
    printf("\nenter your choice");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        result=num1+num2;
        printf("result:%.2lf \n",result);
        break;
       case 2:
        result=num1-num2;
        printf("result:%.2lf \n",result);
        break; 
        case 3:
        result=num1*num2;
        printf("result:%.2lf \n",result);
        break;
        case 4:
        if(num2==0){
            printf("not possible");
        }
        else{
            result=num1/num2;
            printf("result:%.2lf \n",result);
        }
        break;
        default:
        printf("invalid option \n");
    }
}