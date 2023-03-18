#include<stdio.h>
int main(){
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    if(a>0){
        printf("the number is positive");
    }
    else if(a<0){
        printf("the number is negative");
    }
    else{
        printf("It is zero");
    }
}