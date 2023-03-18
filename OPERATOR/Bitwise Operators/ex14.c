/*Turn OFF 0 and 5 position*/
#include<stdio.h>
int main(){
    int reg=227,j,i;
    int l=1;
    printf("the binary number of reg is:");
    for(i=7;i>=0;i--){
        j=(reg>>i) & 0x01;
        printf("%d",j);
        
    }
    reg=reg^((l<<0)|(l<<5));
     printf("\nthe binary number is:");
    for(i=7;i>=0;i--){
        j=(reg>>i) & 0x1;
        printf("%d",j);
    }
    
}