#include<stdio.h>
void add(){
    int a=5,b=6;
    printf("Sum:%d\n",a+b);
}
int sub(int a,int b){
    printf("Diff:%d\n",a-b);
    return a-b;
}
int mul(){
    int a=5,b=6;
    printf("Product:%d\n",a*b);
    return a*b;
}
void div(int a,int b){
    printf("Qoutient:%d\n",a/b);
}
int main(){
    int a=5,b=6;
    add();
    sub(a,b);
    mul();
    div(a,b);
}