#include<stdio.h>
int main(){
	int sec=25300;
	int h,m,s;
	h=sec/3600;
	m=(sec-h*3600)/60;
	s=sec-(h*3600)-(m*60);
	printf("time is %dhr %dmins %dsecs",h,m,s);
	return 0;
}
