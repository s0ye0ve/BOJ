/*
����:
n�� �־����� ��, 1���� n���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�:
ù° �ٿ� n (1 �� n �� 10,000)�� �־�����.
���:
1���� n���� ���� ����Ѵ�.
*/
 
#include <stdio.h>
int main() {
	int n;
	int sum = 0;
	scanf("%d", &n);
	if(n >= 1 && n <= 10000) {
		for(int i = 1; i < n+1; i++)
			sum = sum + i;
		printf("%d", sum);
	}
	return 0;
} 
