#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int findMax(int x[]);
int main() {
	int num[5], i;
	printf("Inter 5 number : ");
	for (i = 0; i < 5; i++) {
		scanf("%d", &num[i]);
	}
	//	for(i=0;i<5;i++){
	//		printf("%d",num[i]);
	//	}
	printf("Maximum Number : %d", findMax(num));
	return 0;
}

int findMax(int x[]) {
	int i, max = x[0];
	for (i = 0; i < 5; i++) {
		if (x[i] > max)	max = x[i];
	}
	return max;
}
