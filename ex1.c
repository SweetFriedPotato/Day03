#include<stdio.h>
int main() {
	//��ġ���� ��ġ�� ������
	int a, b;
	a = 1;
	b = ++a;
	printf("a:%d, b:%d\n", a, b);

	a = 1;
	b = a++;
	printf("a:%d, b:%d\n", a, b);
}