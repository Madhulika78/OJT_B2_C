#include<stdio.h>
int main(){
    char a[]={'a','i','o','u','e'};
    char b;
    scanf("%c",&b);
    for(int i=0;i<sizeof(a);i++){
        if(((int)b)==((int)a[i])){
            printf("it is vowel");
        }
        else{
            printf("Consonant");
        }
    }
    return 0;
}