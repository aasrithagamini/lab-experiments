#include<stdio.h>
int main(){
   int num1,num2,num3,num4,max,min;
   printf("enter 4 numbers:");
   if(scanf("%d %d %d %d",&num1,&num2,&num3,&num4) !=4){
       printf("invalid input \n");
   }
       if(num1>=num2&&num1>=num3&&num1>=num4){
          max=num1; 
       }
       else if(num2>=num1&&num2>=num3&&num2>=num4){
           max=num2;
       }
       else if(num3>=num2&&num3>=num1&&num3>=num4){
           max=num3;
       }
       else{
           max=num4;
       }
      if(num1<=num2&&num1<=num3&&num1<=num4){
          min=num1; 
       }
       else if(num2<=num1&&num2<=num3&&num2<=num4){
           min=num2;
       }
       else if(num3<=num2&&num3<=num1&&num3<=num4){
           min=num3;
       }
       else{
           min=num4;
       }
       printf("max value:%d \n",max);
       printf("min value: %d \n",min);
}