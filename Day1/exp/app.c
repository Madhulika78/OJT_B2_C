#include<stdio.h>
int main(){
	int x;

	scanf("%d",&x);
	switch(x){
		case 1:
		printf("result=%d",add(20,10));
		break;
		case 2:
                printf("result=%d",sub(20,10));
                break;
	}
}
