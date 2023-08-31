#include<stdio.h>
int main(void) {
	int age;

	printf("나이:");
	scanf("%d", &age);

	age = age + 10;
	printf("10년 후 나이: %d", age);
	return 0;
}