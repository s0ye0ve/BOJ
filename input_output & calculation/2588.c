/*
����:
(�� �ڸ� ��) �� (�� �ڸ� ��)�� ������ ���� ������ ���Ͽ� �̷������.
(1)�� (2)��ġ�� �� �� �ڸ� �ڿ����� �־��� �� (3), (4), (5), (6)��ġ�� �� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. 
�Է�:
ù° �ٿ� (1)�� ��ġ�� �� �� �ڸ� �ڿ�����, ��° �ٿ� (2)�� ��ġ�� �� ���ڸ� �ڿ����� �־�����.
���:
ù° �ٺ��� ��° �ٱ��� ���ʴ�� (3), (4), (5), (6)�� �� ���� ����Ѵ�.
*/

#include <stdio.h>
int main() {
	int first;
	int second[3] = {0, };
	scanf("%d", &first);
	for(int i = 0; i < 3; i++) {
		scanf("%1d", &second[i]);
	}
	printf("%d\n", first * second[2]);
	printf("%d\n", first * second[1]);
	printf("%d\n", first * second[0]);
	
	int second_2 = 100 * second[0] + 10 * second[1] + second[2];
	printf("%d", first * second_2);
	return 0;	
} 
