#include<stdio.h>
int main(){
    char a;
    printf("Enter a alphabet:");
    scanf("%c",&a);
    if(a=='a'||a=='i'||a=='o'||a=='e'||a=='u'){
        printf("vowel");
    }
    else{
        printf("consonant");
    }
}