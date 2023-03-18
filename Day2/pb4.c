#include<stdio.h>
int main(){
	float w1,w2,v;
	int i1,i2;
	printf("No of items");
	scanf("%d\n",&i1);
	printf("Weight of item");
	scanf("%f\n",&w1);
	printf("No of items");
        scanf("%d\n",&i2);
        printf("Weight of item");
        scanf("%f\n",&w2);
	v=((i1*w1)+(i2*w2))/(i1+i2);
	printf("Average value:%f\n",v);
	return 0;
}
