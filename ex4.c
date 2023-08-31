#include<stdio.h>
int main(void) {
	//두 정수를 입력 받아 덧셈 결과 출력
	int a, b, sum;
	printf("정수1 :");
	scanf("%d", &a);

	printf("정수2 :");
	scanf("%d", &b);

	sum = a + b;
	printf("합 : %d\n", sum);
	printf("%d+%d=%d", a, b, sum);

	//두 실수를 입력 받아 덧셈 결과 출력
	double x, y, result;
	printf("두 실수를 입력하세요");
	scanf("%lf%lf", &x, &y);
	result = x + y;

	printf("%lf + %lf = %lf", x, y, result);
	return 0;
}