/*Turn ON 3 Turn OFF 7*/
#include<stdio.h>
int main(){
    int reg=227,j,i;
    int l=1;
    printf("the binary number of reg is:");
    for(i=7;i>=0;i--){
        j=(reg>>i) & 0x01;
        printf("%d",j);
        
    }
    reg=(reg|(l<<3))& (~(l<<7));
     printf("\nthe binary number is:");
    for(i=7;i>=0;i--){
        j=(reg>>i) & 0x1;
        printf("%d",j);
    }
    
}