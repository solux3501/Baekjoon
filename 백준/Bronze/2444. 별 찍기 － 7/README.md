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

#2587 대표값2

#include <algorithm> 선언 : 정렬, 검색, 변형, 제거, 비교 등 데이터 조작 알고리즘
#include <numeric> 선언 : 수치 연산이 있는 알고리즘 제공
- sum = accumulate(시작 지점, 끝 지점, 초기값=기본값)
 * begin(), end() : 괄호 안의 가장 처음과 끝. 즉 arr과 arr+size와 같은 의미
- reduce는 accumulate와 같지만 각각 병렬 연산, 순차적 연산이라는 강점
- size 유동적으로 설정 방법 : sizeof(배열)/sizeof(자료형)

# 힙
- 힙의 어원 : '아무렇게나 쌓여진 건초더미'. 자료구조의 힙, 메모리 영역의 힙 2가지가 있으며 어원은 같으나 방향이 전혀 다름.
- 자료구조의 힙 : 우선순위 큐를 구현할 때 주로 사용. 최대 or 최소값을 빠르게 찾는데 최적화
- 메모리 영역의 힙 : 운영체제가 프로그램 실행 중 동적으로 할당하는 메모리 영역
  * 사용하는 이유 : 필요한 때, 필요한 영역만큼만 사용 가능

# C : malloc과 free 함수 / C++은 new와 delete
- 형태
  void* malloc(size_t size);
  void free(void* p);
- malloc : 시작 주소를 반환, free : 해제
- size_t size : typedef로 재정의되어 만들어진 자료형
- 사용
   int* p = NULL;
   p = (int*) malloc(4);
   ...
   free(p);
- int* p : 변수 선언. p를 가르키는 포인터
- 숫자만큼 메모리를 할당하고, 그 시작 주소(void*)를 반환
- (int*) : 형 변환. malloc이 반환하는 void*를 int*로 변환하겠다는 의미
