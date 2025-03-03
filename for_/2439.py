'''
문제:
첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
하지만, 오른쪽을 기준으로 정렬한 별(예제 참고)을 출력하시오.
입력:
첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.
출력:
첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.
'''

N = int(input())
for i in range(1, N+1):
    print('{}'.format('*' * i).rjust(N))
    #ljust(length, character) : 왼쪽 정렬
    #rjust(length, character) : 오른쪽 정렬
    #character : Optional. A character to fill the missing space (to the right of the string). Default is " " (space).