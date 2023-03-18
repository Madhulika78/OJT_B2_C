#include<stdio.h>
int main(){
    int a,b,c;
    printf("First no.");
    scanf("%d",&a);
    printf("Second no.");
    scanf("%d",&b);
    c=a/b;
    if(b!=0){
        printf("%d",c);
    }
    else{
        printf("Division is not possible");
    }
    return 0;
}