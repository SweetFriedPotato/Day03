#include<stdio.h>
int main(void) {
	//�� ������ �Է� �޾� ���� ��� ���
	int a, b, sum;
	printf("����1 :");
	scanf("%d", &a);

	printf("����2 :");
	scanf("%d", &b);

	sum = a + b;
	printf("�� : %d\n", sum);
	printf("%d+%d=%d", a, b, sum);

	//�� �Ǽ��� �Է� �޾� ���� ��� ���
	double x, y, result;
	printf("�� �Ǽ��� �Է��ϼ���");
	scanf("%lf%lf", &x, &y);
	result = x + y;

	printf("%lf + %lf = %lf", x, y, result);
	return 0;
}