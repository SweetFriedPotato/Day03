#include<stdio.h>
int main(void) {
	int n1, n2;
	double n3;

	printf("�� ������ �Է��Ͻÿ�: ");
	scanf("%d%d", &n1, &n2);

	if (n2 == 0)
		printf("0���� ���� �� �����ϴ�. \n");
	else {
		n3 = (double)n1 / n2;
		printf("������ ����� %.2f�Դϴ�.\n", n3);
	}
	return 0;
}