/*
����: N���� ���� �־����� ��, �̸� ������������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�: ù° �ٿ� ���� ���� N(1 �� N �� 1,000)�� �־�����. ��° �ٺ��� N���� �ٿ��� ���ڰ� �־�����. �� ���� ������ 1,000���� �۰ų� ���� �����̴�. ���� �ߺ����� �ʴ´�.
���: ù° �ٺ��� N���� �ٿ� ������������ ������ ����� �� �ٿ� �ϳ��� ����Ѵ�.
*/

#include <stdio.h>
#define swap(a,b) {int temp; temp = a; a = b; b = temp;}
int main() {
	int N;
	int num[1000];
	scanf("%d", &N);
	for(int i = 0; i < N; i++) {
		scanf("%d", &num[i]);
	}
	for(int i = 0; i < N; i++) {
		for(int j = i; j < N; j++) {
			if(num[i] > num[j]) {
				swap(num[i], num[j])
			}
		}
	}
	for(int i = 0; i < N; i++) {
		printf("%d\n", num[i]);
	}
	return 0;
}