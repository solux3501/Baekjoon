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

  # 2309 일곱 난쟁이
- #include <algorithm> 헤더 선언으로 'sort'사용
- #include <numeric> 헤더 선언으로 'accumulate' 사용
- while 사용 시에도 괄호 써야함.  Python이랑 헷갈리지 말 것
- C++에서도 'and, or, not' 사용 가능. 다만 대부분에 코드에서는 '&&,||, !' 사용

#1267 핸드폰 요금

#include <cmath> 선언 : 수학 관련 헤더. 반올림, 제곱근, 절대값 계산 시 사용
- ceil(N) : 올림
- floor(N) : 내림
- round(N) : 반올림 (= floor(N+0.5))

#2576 홀수
- #include <algorithm> 선언
- min(a,b) : a와 b 중 최소값
- max(a, b) : a와 b 중 최대값
- 여러개 확인 시 : max({a, b, c, d...})

#Vector
- 뜻은 '운반하다'. 수학에서는 크기와 방향을 가진 값을 의미하며, 프로그래밍에서는 연속적으로 저장하면서 '운반'하는 역할을 해서 명명
- STL(Standard Template Library)의 컨테이너 중 하나
- 동적 배열 형태의 자료 구조(= 크기가 자동으로 조정. 배열과 유사하나 보다 유연)
- 내부적으로 메모리를 재할당할 때, 기존 크기의 2배로 증가시킴
- 빠른 인덱스 접근 가능
- 끝 단에서 push, pop 기능은 매우 빠름
- 반복자(iterator) 지원 : begin, end
- vector와 queue 사용 방식 상에는 비슷함. 다만 vector의 경우 메모리가 물리적으로 연속적, queue의 경우 정크데이터들을 포인터(주소)로 일일이 연결. 따라서 queue의 경우 추가적인 메모리 사용이 있음

<사용 방법>
- #include <vector> 헤더 선언
- vecotr<int> v : 비어있는 벡터 v 선언
- vecotr<int> v(N) : v선언. 길이는 N, 내부는 '0'으로 초기화
- vecotr<int> v(N, 1) : 위와 동일. 내부는 '1'로 초기화
- vector<int> vCopy(v) : v를 복사한  vCopy 벡터 생성
- v[idx] : v의 idx 위치의 데이터 참조
- v.at[idx] : 위와 동일. 더 느리지만 범위 초과를 방지해줌
- v.front() : 1번째 데이터 참조
- v.back() : 마지막 데이터 참조
- v.begin() : 1번째 데이터를 가르킴(포인터와 비슷한 iterator)
- v.end() : 마지막 데이터 가리킴
- v.push_back(N) : 마지막 데이터에 N 삽입
- v.pop_back() : 마지막 데이터 제거
- v.clear() : 데이터 초기ㅣ화
- v.reserve(N) : N개의 데이터 저장 공간 동적 할당
- v.capacity() : 데이터에 할당된 메모리
- v.size() : 위에 것에서 데이터가 실제로 들어간 메모리량
- v2.swap(v1) : v1과 v2의 내용 전부 맞교환
- v.insert(5, 2) : 5번째 위치에 2를 삽입
- v.insert(5, 2, 3) : 5번째 위치에 2를 3개 삽입
- v.empty() : v를 비움 
