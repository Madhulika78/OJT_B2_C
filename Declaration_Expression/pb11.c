#include<stdio.h>
int main(){
    int a,b;
    printf("First no.:");
    scanf("%d",&a);
    printf("Second no.");
    scanf("%d",&b);
    if (b>a){
        int temp;
        temp=a;
        a=b;
        b=temp;
    }
    printf("Quotient:%d",a/b);
    printf("remainder:%d",a%b);
    
    return 0;
}