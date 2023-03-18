/* Turn on bit position 2*/
#include<stdio.h>
int main(){
    int reg=224,j,i;
    int l=1;
    printf("the binary number of reg is:");
    for(i=7;i>=0;i--){
        j=(reg>>i) & 0x01;
        printf("%d",j);
        
    }
    reg=reg|(l<<2);
    printf("\nafter:%d",reg);
    printf("\nthe binary number of reg is:");
    for(i=7;i>=0;i--){
        j=(reg>>i) & 0x01;
        printf("%d",j);
        
    }
    
}