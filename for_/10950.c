/*
문제:
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
입력:
첫째 줄에 테스트 케이스의 개수 T가 주어진다.
각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10) 
출력:
각 테스트 케이스마다 A+B를 출력한다.
*/
 
#include <stdio.h>
int main() {
	int A, B, T;
	int result[100] = {0, }; 
	scanf("%d", &T);
	for(int i = 0; i < T; i++) {
		scanf("%d %d", &A, &B);
		if(A > 0 && B < 10) {
			result[i] = A + B; //그냥 출력은 틀렸다고 해서 배열로 받아줬다. 
		}
	}
	for(int i = 0; i < T; i++) {
		printf("%d\n", result[i]);	
	}
	return 0;
} 
