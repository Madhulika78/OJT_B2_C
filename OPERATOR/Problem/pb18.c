#include<stdio.h>
int main(){
    int n;
    printf("enter");
    scanf("%d",&n);
    int t=0;
    for(int i=1;i<=n;i++){
        t=t+i;
    }
    printf("total:%d",t);
}