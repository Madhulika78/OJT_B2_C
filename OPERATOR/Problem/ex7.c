#include<stdio.h>
int main(){
    int a,b;
    printf("Two numbers:");
    scanf("%d %d",&a,&b);
    printf("Before, a is %d and b is %d\n",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("After, a is %d and b is %d\n",a,b);
}