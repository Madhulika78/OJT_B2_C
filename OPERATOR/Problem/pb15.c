#include<stdio.h>
int main(){
    int year;
    printf("Enter a year:",year); 
    scanf("%d",&year);
    if(year%4==0 || year%400==0) {
         printf("%d is a leap year and has 366 days in a year.",year); 
         } else{
             printf("%d is  not a leap year and has 365 days in a year.",year); 
              }
              return 0;}