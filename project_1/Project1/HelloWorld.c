#include <stdio.h>
#define PRODUCT(X, Y) ((X)*(Y))

void sprint();

main() {
	printf("Hello World! \n");

	int i = 10, j = 20;
	printf("i * j = %d\n\n",  PRODUCT(i, j));

	sprint();
}

void sprint() {
	printf("sprint �Լ����� ����߽��ϴ�. \n");
}