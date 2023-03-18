#include<stdio.h>
int main(){
	int days;
	printf("Enter no. of days:");
	scanf("%d\n",&days);
	int y,w,d;
	y=days/365;
	w=(days%365)/7;
	d=days-(y*365)-(w*7);
	printf("time is %dyear %dweeks %ddays",y,w,d);
	return 0;
}
