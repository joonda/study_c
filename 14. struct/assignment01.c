#include <stdio.h>

int main(void)
{
	// 포인터 변수 선언
	char* pc;
	int* pi;
	double* pd;

	// 임의의 주소 값 대입
	pc = (char*)1000;
	pi = (int*)1000;
	pd = (double*)1000;

	// 증가 전, 주소 값 확인
	printf("증가 전 pc = %d, pi = %d, pd = %d \n", pc, pi, pd);

	pc++;
	pi++;
	pd++;

	// 증가 후, 주소 값 확인
	printf("증가 후 pc = %d, pi = %d, pd = %d \n", pc, pi, pd);

	// +2 씩 증가 후 주소 값 확인
	printf("pc+2 = %d, pi+2 = %d, pd+2 = %d \n", pc + 2, pi + 2, pd + 2);

	return 0;
}