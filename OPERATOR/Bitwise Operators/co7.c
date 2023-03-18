#include<stdio.h>
int main(){
    int a=1234,pin;
    printf("Enter your pin:");
    scanf("%d",&pin);
    printf("%s",pin==a?"Proceed":"Incorrect pin");
}