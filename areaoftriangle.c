#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c,s,area;
    printf("enter the lengths of 3 sides of the triangle:");
    scanf("%lf %lf %lf",&a,&b,&c);
    if((a+b>c)&&(a+c>b)&&(b+c>a)){
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("area of the triangle=%.2f\n",area);
    }
    else{
        printf("invalid sides of a triangle");
    }
}