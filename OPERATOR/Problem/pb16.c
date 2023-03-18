#include<stdio.h>
int main(){
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    if(a>0){
        printf("positive number\n");
    }
    else if(a<0){
        printf("negative number\n");
    }
    else{
        printf("number is zero\n");
    }

}