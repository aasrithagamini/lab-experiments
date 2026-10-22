#include<stdio.h>
int main(){
    int a,b,c,sum;
    float avg;
    printf("enter a,b,c:");
    scanf("%d %d %d",&a, &b, &c);
    sum=a+b+c;
    printf("%d \n",sum);
    avg=sum/3;
    printf(" the avg of the given numbers is %.2f",avg);
}