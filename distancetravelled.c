#include<stdio.h>
int main(){
    double u,a,t,distance;
    printf("enter intial velocity(in m/s)");
    scanf("%lf",&u);
    printf("enter acceleration(in m/s*s)");
    scanf("%lf",&a);
    printf("enter time taken(in s)");
    scanf("%lf",&t);
    distance=(u*t)+(0.5*a*t*t);
    printf("\ndistance travelled=%.2fmeters",distance);
}