/*
����: 
�� �ڿ��� A�� B�� �־�����. �̶�, A+B, A-B, A*B, A/B(��), A%B(������)�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
�Է�: 
�� �ڿ��� A�� B�� �־�����. (1 �� A, B �� 10,000)
���: 
ù° �ٿ� A+B, ��° �ٿ� A-B, ��° �ٿ� A*B, ��° �ٿ� A/B, �ټ�° �ٿ� A%B�� ����Ѵ�.
*/

#include <stdio.h>
int main() {
	int A, B;
	scanf("%d %d", &A, &B);
	if(A >= 1 && B <= 10000) {
		printf("%d\n", A+B);
		printf("%d\n", A-B);
		printf("%d\n", A*B);
		printf("%d\n", A/B);
		printf("%d", A%B);
	}
	return 0;
}
