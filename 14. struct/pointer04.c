#include <stdio.h>

/* 배열 포인터 */
int main(void) {
	int a[5] = { 1, 2, 3, 4, 5 };
	int(*pa)[5];
	int i;

	pa = &a;
	for (i = 0; i < 5; i++) {
		printf("%d \n", (*pa)[i]);
	}
	return 0;
}