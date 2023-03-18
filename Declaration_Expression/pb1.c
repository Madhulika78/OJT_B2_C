#include<stdio.h>
int main(){
    int a[5],total=0;
    printf("enter five numbers");
    scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
    for(int j=0; j<5; j++){
        if(a[j]%2!=0){
            total+=a[j];
        }
    }
    printf("Sum of all odd numbers:%d\n",total);
    return 0;
}