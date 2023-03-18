/* the program explains arithmetic operattors
operators- '+','-','*','/','%'
syntax: operand <operator> operand */
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the no.");
    scanf("%d %d",&a,&b);
    printf("Sum=%d\n",a+b);
    printf("Difference=%d\n",a-b);
    printf("Product=%d\n",a*b);
    printf("Quotient=%d\n",a/b);
    printf("Remainder=%d\n",a%b);
    return 0;
}