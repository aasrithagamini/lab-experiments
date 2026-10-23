#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c,discriminent,root1,root2,real_part,imaginary_part;
    printf("enter a,b,c:");
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a==0){
        printf("\n invalid input:'a' cannot be 0 in a quadratic equation");
    }
    discriminent=b*b-4*a*c;
    if(discriminent>0){
        root1=(-b+sqrt(discriminent))/(2*a);
        root2=(-b-sqrt(discriminent))/(2*a);
    
    printf("roots are real and distinct \n");
    printf("root1=%.2lf \n",root1);
    printf("root2=%.2lf \n",root2);
    }
    else if(discriminent==0){
        root1=root2=-b/(2*a);
        printf("roots are real and equal: \n");
        printf("root1=root2=%.2lf \n",root1);
    }
    else{
        real_part=-b/(2*a);
        imaginary_part=sqrt(-discriminent)/(2*a);
        printf("roots are complex and distinct:\n");
        printf("root1=%.2lf+%.2lfi\n",real_part,imaginary_part);
        printf("root2=%.2lf-%.2lfi\n",real_part,imaginary_part);
    }
    
}