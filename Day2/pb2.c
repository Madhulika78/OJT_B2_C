#include<stdio.h>
int main(){
	int days;
	printf("Enter no. of days:");
	scanf("%d\n",&days);
	int y,m,d;
	y=days/365;
	m=(days-y*365)/30;
	d=days-(y*365)-(m*30);
	printf("time is %dyear %dmonth %ddays",y,m,d);
	return 0;
}
