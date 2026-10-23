#include<stdio.h>
int main(){
   float units,total_bill;
   printf("enter total units consumed:");
   if(scanf("%f",&units)!=1||units<0){
       printf("invalid input \n");
   }
   if(units<=100){
       total_bill=units*1.50;
   }
   else if(units<=200){
       total_bill=units*2.50;
   }
  else if(units<=500){
       total_bill=units*4.00;
   }
   else{
       total_bill=units*6.00;
   }
   printf("total bill amount:₹%.2f \n",total_bill);
}