#include<stdio.h>
int main(){
    char id[10];
    int h;
    float v;
    printf("Enter the employee id:\n");
    scanf("%s",&id);
    printf("No. of hours:");
    scanf("%d",&h);
    printf("Enter the salary");
    scanf("%f",&v);
    printf("Employee Id:%s");
    printf("Total salary:%f",v*h);
    return 0;

}