/* Count no. of ones*/
#include<stdio.h>
int main(){
    int a,i,j,c=0;
    printf("Enter the number");
    scanf("%d",&a);
    printf("the binary number is:");
    for(i=7;i>=0;i--){
        j=(a>>i) & 0x01;
        printf("%d",j);
        if(j==1){
            c++;
        }
    }
    printf("\nnumber of ones:%d",c);
    return 0;
}