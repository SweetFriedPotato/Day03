#include<stdio.h>
int main(void) {
	int num;

	printf("����: ");
	scanf("%d", &num);

	if (num > 0)
		printf("���\n");
	else
		printf("����\n");

	printf("�Էµ� ���� %d�Դϴ�\n", num);

	return 0;
}