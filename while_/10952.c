/*
문제
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

입력
입력은 여러 개의 테스트 케이스로 이루어져 있다.
각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)
입력의 마지막에는 0 두 개가 들어온다.

출력
각 테스트 케이스마다 A+B를 출력한다.
*/

#include <stdio.h>
#include <string.h>
int main() {
	int a, b;
	int i = 0, cnt = 0;
	int num[100] = {0, };
	
	do {
		scanf("%d %d", &a, &b);
		if(a == 0 && b == 0) break;
		num[i] = a + b;
		i++;
		cnt++;
	}
	while(1);
	for(int i = 0; i < cnt; i++) {
		printf("%d\n", num[i]);
	}
}
