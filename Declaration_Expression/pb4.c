#include<stdio.h>
int main(){
    int a,b;
    printf("First no.:");
    scanf("%d",&a);
    printf("Second no.");
    scanf("%d",&b);
    if (a>b){
        int temp;
        temp=a;
        a=b;
        b=temp;
    }
    if(b%a==0){
        printf("Multiplied");
    }
    else{
        printf("Not Multiplied");
    }
    return 0;
}