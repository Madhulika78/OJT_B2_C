/*power OFF a given bit*?
*/
#include<stdio.h>
int main(){
    int a,i,j,n;
    printf("Enter the number");
    scanf("%d",&a);
    printf("power OFF particular bit");
    scanf("%d",&n)
    printf("the binary number is:");
    for(i=7;i>=0;i--){
        j=(a>>i) & 0x1;
        printf("%d",j);
    }
    
        j=(a>>n) & 0;
        printf("\nChanged bit %d",j);

    


}