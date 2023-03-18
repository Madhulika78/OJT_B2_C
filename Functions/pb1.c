#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int mul(int a,int b){
    return a*b;
}
int div(int a,int b){
    return a/b;
}
int main(){
    int a=10;int b=20;
    printf("Sum:%d\n",add(a,b));
    printf("Difference:%d\n",sub(a,b));
    printf("Product:%d\n",mul(a,b));
    printf("Quotient:%d\n",div(a,b));
    
}