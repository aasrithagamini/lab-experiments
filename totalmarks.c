#include<stdio.h>
int main(){
   int sub1,sub2,sub3,sub4,sub5,total;
   float avg;
   printf("enter marks for 5 subjects:");
   scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);
   total=sub1+sub2+sub3+sub4+sub5;
   avg=total/5.0;
   printf("total marks=%d \n",total);
   printf("avg marks=%.2f \n",avg);
}