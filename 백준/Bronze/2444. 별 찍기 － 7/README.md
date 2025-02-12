# [Bronze III] 별 찍기 - 7 - 2444 

[문제 링크](https://www.acmicpc.net/problem/2444) 

### 성능 요약

메모리: 31120 KB, 시간: 32 ms

### 분류

구현

### 제출 일자

2024년 6월 20일 23:55:33

### 문제 설명

<p>예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.</p>

### 입력 

 <p>첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.</p>

### 출력 

 <p>첫째 줄부터 2×N-1번째 줄까지 차례대로 별을 출력한다.</p>



10804 카드 역배치

#include <algorithm> 선언
- reverse 함수 사용
- 사용 방법 : reverse(begin(배열명)+@, begin(배열명)+@)
* begin : 포함, end : 이후부터
- 작동방식 : 양 끝데서 서로 요소를 교환
- 시간 복잡도 : O(n)

10093 숫자
- 파이썬과 다르게 자동으로 자료형을 바꿔주지 않음
* int -> long으로 선언

추가 : 참조에 의한 호출(call by reference)
void swap(int &a, int &b);

int main()
{
    int a= 10, b = 20;
    swap(a, b);
    return 0;
}
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
- 매개 변수에만 '&'표시. 주소 참조
- 매개 변수 선언 시 항상 자료형 선언 필요
- 나머지는 그냥 변수명만 입력
