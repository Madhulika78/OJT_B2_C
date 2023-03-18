#include<stdio.h>
int main(){
    int a,b,i,j;
    printf("Enter the number");
    scanf("%d",&a);
    printf("\nthe binary number is:");
    for(i=7;i>=0;i--){
        j=(a>>i) & 0x01;
        printf("%d",j);
    }
    b=~a;
    printf("\nthe binary complement of that number is:");
     for(i=7;i>=0;i--){
        j=(b>>i) & 0x01;
        printf("%d",j);
    }
}