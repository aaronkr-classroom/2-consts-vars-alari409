// calculator.c
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>// M_PI ��� ����

int Sum(int a, int b) { return a + b; };
int Sub(int a, int b) { return a - b; };
int Mul(int a, int b) { return a * b; };
int Div(int a, int b) {// b�� 0�� �Ǹ� �ȵ�
	if (b == 0)
	{
		printf("Error: Divide by 0\n");

		return 0;
	}

	return a / b;
}

double circ_area(double r) {
	return M_PI * r * r;
} // ���� 3.141592
double circ_circ(double r) {
	return 2 * M_PI * r;
} // �ѷ�



