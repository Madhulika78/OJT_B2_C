#include<stdio.h>
#include<stdlib.h>
int main(){
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if(a>0){
        if(a%2==0){
            printf("%d is positive even number",a);
        }
        else{
            printf("%d is positive odd number",a);
        }
    }
    else if(a<0){
        if((abs(a))%2==0){
            printf("%d is negative even number",a);
        }
        else{
            printf("%d is negative odd number",a);
        }
    }
    else{
        printf("Ït is zero");
    }
    return 0;

}