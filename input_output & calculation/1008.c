/*
문제: 두 정수 A와 B를 입력받은 다음, A/B를 출력하는 프로그램을 작성하시오.
입력: 첫째 줄에 A와 B가 주어진다. (0 < A, B < 10)
출력: 첫째 줄에 A/B를 출력한다.
*/
 
#include <stdio.h>
int main() {
	int A, B;
	scanf("%d %d", &A, &B);
	if(A > 0 && B < 10) {
		printf("%.9f\n", (double)A/B);	
	} 
	return 0;
}
