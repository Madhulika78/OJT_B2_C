#include<stdio.h>
int main(){
    register int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        printf("%d ",i);
    }
}