#include<stdio.h>
#include<math.h>
int main(){
    printf("enter the cofficient of x^2:");
    int a;
    scanf("%d",&a);
    printf("enter the cofficient of x:");
    int b;
    scanf("%d",&b);
    printf("enter the cofficient of constant:");
    int c;
    scanf("%d",&c);
    printf("%dx^2 + %dx + %d\n",a,b,c);
    printf("the roots are:\n");
    float x1,x2;
    float d=sqrt(b*b-(4*a*c));
   //roots are real and different 
    if(d>0){
        x1=(-b+d)/(2*a);
    x2=(-b-d)/(2*a);
    printf("x1=%f\n",x1);
    printf("x2=%f\n",x2);
    }
    //roots are real and equal
    else if(d==0){
        x1=(-b)/(2*a);
    x2=(-b)/(2*a);
    printf("x1=%f\n",x1);
    printf("x2=%f\n",x2);
    }
    //roots are not real
    else{
        x1=(-b+d)/(2*a);
    x2=(-b-d)/(2*a);
    printf("x1=%f\n",x1);
    printf("x2=%f\n",x2);
    }
}