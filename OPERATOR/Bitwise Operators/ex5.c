/* multiply & add two variables*/
#include<stdio.h>
int main(){
    int a,b,c,d,j,k,l;
    printf("Enter the number");
    scanf("%d %d",&a,&b);
    printf("the binary number of %d is:\n",a);
    for(int i=7;i>=0;i--){
        j=(a>>i) & 0x01;
        printf("%d",j);
    }
    printf("\nthe binary number of %d is:\n",b);
    for(int i=7;i>=0;i--){
        k=(b>>i) & 0x01;
        printf("%d",k);
    }

    c=a &b;
    printf("\nthe binary number of resultant %d is:\n",c);
    for(int i=7;i>=0;i--){
        l=(c>>i) & 0x01;
        printf("%d",l);
    }

    d=a |b;
    printf("\nthe binary number of resultant %d is:\n",d);
    for(int i=7;i>=0;i--){
        l=(d>>i) & 0x01;
        printf("%d",l);
    }
}