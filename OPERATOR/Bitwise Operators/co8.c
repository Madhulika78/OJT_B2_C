#include<stdio.h>
int main(){
    int a=5ñ0,b=40;
    if(a>b){
        printf("befor, a=%d b=%d\n",a,b);
        a=a+b;
        b=a-b;
        a=a-b;
        printf("after, a=%d b=%d\n",a,b);
    }
    else{
        printf("a=%d b=%d\n",a,b);
    }
}