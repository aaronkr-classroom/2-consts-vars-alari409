/*100������ �ִ�. �� ���� ����� 10%�� ���ͷ��� �ڶ��ϴ� �ֽ� ���忡 �����Ϸ��� �Ѵ�.
(���� 12���� ���� ���). ���� 40�⵿��  �� ���� �ֽĽ��忡 �״�� �θ�, �󸶰� �ɱ�? calculator.h  ���ϰ�
�Ʒ��� ������ ����Ͽ� ����ϴ� c���α׷��� �ۼ��϶�. ���� ����� ���ؼ��� math.h ���̺귯���� 
pow(value, exponent) �Լ��� ����϶�

A = P(1 + r/n) ^ (nt)

���⼭ 
A = ���ϰ��� �ϴ� ��
P = ����
r = �������� (�Ҽ��� ǥ��)
n = ���� ȸ�� (12��)
t = �Ⱓ(40��)

*/
#include "calculator.h"
#include <math.h>
#include "calculator.h"

int main()
{
	
	double P = 1000000;
	double r = 0.10; //10percent
	double n = 12; 
	double t = 40; 
	double A = P * pow((1 + r / n), (n * t));

	// double B = Mul(P, pow(Sum(1, Div(r, n)), Mul(n, t)));

	printf("From %.2fKRW => %.2fKRW!~\n", P, A);




	return 0;
}
