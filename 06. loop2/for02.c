// 1부터 10까지 반복을 이용한 정수 합을 구하는 프로그램

#include <stdio.h>

int main(void) {
	int i, sum;

	sum = 0;
	for (i = 1; i <= 10; i++) {
		sum += i;
	}
	printf("1부터 10까지의 정수의 합 = %d \n", sum);

	return 0;
}