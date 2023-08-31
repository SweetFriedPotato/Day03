#include<stdio.h>
int main() {
	//전치형과 후치형 연산자
	int a, b;
	a = 1;
	b = ++a;
	printf("a:%d, b:%d\n", a, b);

	a = 1;
	b = a++;
	printf("a:%d, b:%d\n", a, b);
}