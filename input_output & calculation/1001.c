/*
����: �� ���� A�� B�� �Է¹��� ����, A-B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�: ù° �ٿ� A�� B�� �־�����. (0 < A, B < 10)
���: ù° �ٿ� A-B�� ����Ѵ�.
*/
 
#include <stdio.h>
int main() {
	int A, B;
	scanf("%d %d", &A, &B);
	if(A > 0 && B < 10) {
		printf("%d", A-B);	
	} 
	return 0;
}
