#include<stdio.h>
int main(){
    int A=2,B=3,C=4,D=5,E=2,F=3,G=6;
    int a,b,c;
    a=A+B*C+(D*E)+F*G;
    printf("result of a is %d \n",a);
    b=A/B*C-B+A*D/3;
    printf("result of b is %d \n",b);
    A=5,B=10;
    c=A++ +B-- -A;
    printf("result of c is %d \n",c);
    int i=5;
    int j=(i++)+(++i);
    printf("result of j is %d \n",j,i);
}