#include<stdio.h>
int main(){
    int mon=24,tue=30,wed;
    printf("Today's temp:");
    scanf("%d",&wed);
    if(wed==mon){
        printf("%d",mon);
    }
    else if(wed==tue){
        printf("%d",tue);
    }
    else{
        printf("Nope");
    }
}