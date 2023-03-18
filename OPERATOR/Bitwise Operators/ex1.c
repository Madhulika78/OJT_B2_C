/*print binary number of a given number*?
*/
#include<stdio.h>
int main(){
    int a,i,j;
    printf("Enter the number");
    scanf("%d",&a);
    printf("the binary number is:");
    for(i=7;i>=0;i--){
        j=(a>>i) & 0x01;
        printf("%d",j);
    }
    
        j=(a>>3) & 0x1;
        
            if(j==1){
                 printf("\n Status of 3 bit is ON",i);
            }
            else{
                printf("\n Status of 3 bit is OFF",i);
            }

    


}