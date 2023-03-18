#include<stdio.h>


float display(static float a){
    return a;
}
int main(){
    float b=20.3;
    printf("%f",display(b));
}