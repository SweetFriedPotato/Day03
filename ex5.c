#include<stdio.h>
int main(void) {
	int num;

	printf("정수: ");
	scanf("%d", &num);

	if (num > 0)
		printf("양수\n");

	printf("입력된 값은 %d입니다\n", num);
}