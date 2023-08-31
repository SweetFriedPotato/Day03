#include<stdio.h>
int main(void) {
	int n1, n2;
	double n3;

	printf("두 정수를 입력하시오: ");
	scanf("%d%d", &n1, &n2);

	if (n2 == 0)
		printf("0으로 나눌 수 없습니다. \n");
	else {
		n3 = (double)n1 / n2;
		printf("나눗셈 결과는 %.2f입니다.\n", n3);
	}
	return 0;
}