#include<stdio.h>

void count(){
    int a=1;
    printf("times %d, address:%x\n",a++,&a);
}
int main(){
    count();
    count();
    count();
    count();
}