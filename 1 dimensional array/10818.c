/*
문제
N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.

입력
첫째 줄에 정수의 개수 N (1 ≤ N ≤ 1,000,000)이 주어진다. 둘째 줄에는 N개의 정수를 공백으로 구분해서 주어진다. 모든 정수는 -1,000,000보다 크거나 같고, 1,000,000보다 작거나 같은 정수이다.

출력
첫째 줄에 주어진 정수 N개의 최솟값과 최댓값을 공백으로 구분해 출력한다.
*/

#include <stdio.h>
int arr[1000000]; // main안에서 선언했더니 공간이 너무 커 런타임 에러가 났다.

int main() {
	int N;
	scanf("%d", &N);
	for(int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	
	int min = 1000000;
	int max = -1000000;
	for(int i = 0; i < N; i++) {
		if(arr[i] < min) {
			min = arr[i];
		}
		if(arr[i] > max) {
			max = arr[i];
		}
	}
	printf("%d %d", min, max);
}
