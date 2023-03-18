#include<stdio.h>
int main(){
    int a=10,b=30,c=5;
    if(a>b && a>c){
        printf("%d",a);
    }
    
    else if(b>a && b>c){
        printf("%d",b);
    }
    
    else{
        printf("%d",c);
    }
}