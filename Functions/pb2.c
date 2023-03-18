#include<stdio.h>
float interest(float a){
    int r=5;
    int t=2;
    return (a*r*t)/100;
}
int main(){
    float p;
    for(int i=0;i<3;i++){
        printf("%d principal:",i);
        scanf("%d",&p);
        printf("\nS.I:%d\n",interest(p));
    }
}