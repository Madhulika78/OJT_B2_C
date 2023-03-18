#include<stdio.h>
int main(){
    int n;
    printf("enter");
    scanf("%d",&n);
    unsigned long long t=1;
    for(int i=1;i<=n;i++){
        t=t*i;
    }
    printf("total:%llu",t);
}