#include<stdio.h>
int main() {
	int n, d1, d2, d3;

	n = 123;
	d1 = n / 100;
	n = n % 100;
	d2 = n / 10;
	d3 = n % 10;

	//���
	printf("���� �ڸ�: %d\n", d1);
	printf("���� �ڸ�: %d\n", d2);
	printf("���� �ڸ�: %d\n", d3);
}