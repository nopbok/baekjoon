# baekjoon
Class 문제를 풀며 알아둬야 하는 내용이나 헷갈리는 부분 위주로 정리했습니다. 
- [Class 1++](#class-1)
- [Class 2++](#class-2)
- [Class 3++](#class-3)

---

## Class 1++
- 1008번: 상대오차 고려
- 1152번: 공백 위치와 개수 고려
- 2439번: 행/열에 따른 반복문 조건 고려
- 2562번: 자연수 입력받는 것을 string으로 입력받음... ㄹㅈㄷ
- 2577번: 몫과 나머지를 이용하여 자릿수 계산 (답은 맞았으나 복잡하게 풂)
- 9498번: 부등호 사용 시 연속 사용 X (ex. a < b < c 가 아닌 a < b && b < c)
- 10171번: 역슬래시, 큰따옴표 출력 시 앞에 역슬래시 추가
- 31403번: append로 문자열 이어붙이는 방법 or 10 곱하여 자릿수 맞추는 방법
- 11720번: 배열 크기 크게 설정하기, char를 atoi 대신 - '0' 하기
- 10250번: ACM 호텔 **-> 각 반복문 조건 설정 주의**
    - (계산 원리만 알면 더 쉽게 풀 수 있다... 어찌보면 w값을 굳이 신경쓰지 않아도 풀리는 문제. 물론 난 능지미달이라 생각해내지 못했다 ㅠ.ㅜ)
- 10809번: 아스키코드 값 알기
- 10818번: visual studio에서는 실행이 안 되나, 백준에서는 정상 실행됨. 
    - **-> visual studio와 백준의 스택 크기가 달라서 그런 것으로 추정.** (이 경우, 배열을 전역변수로 선언하면 visual studio에서도 실행이 가능하다. )

---

## Class 2++
- 30802번: 티셔츠 묶음 구하는 부분에서 딱 나누어 떨어질 경우, T 개수 한 개 감소시키는 부분 고려
- 1978번: 반복문에서 자기 자신 전까지 나누는 부분 체크, 제곱근을 이용하여 소수 구하는 알고리즘이 더 효율적이다. (제곱근 수를 기준으로 곱해지는 수가 대칭임. ex. 36의 경우, 1, 2, 3, 4, 6, 9, 12, 18, 36이 약수 -> 6을 기준으로 약수들이 서로 대칭이 되어 곱해진다.)
- 2231번: 분해합 -> 각 자릿수를 구하는 방법에 대한 간단한 접근 방식 고려
- 2798번: 블랙잭 -> 3장 뽑는 것이니 3중 반복문
- 15829번: hashing 문제, large값 출력 부분에서 M = 1234567891로 나눈 나머지 값 고려
- 2609번: 최대공약수/최소공배수 **(유클리드 호제법)**
- 2775번: 규칙 찾기, 조건 설정 주의
- 2869번: 달팽이 문제 -> **반복문 사용하지 않고** 푸는 방법 고려
- 10989번: 정렬 문제로, **시간 초과 & 메모리 초과**에 주의한다. **counting sort**를 이용하여 메모리 초과를 방지(입력값 모두 버림)하고, 아래 코드를 이용하여 시간 초과를 방지한다.
```
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
```
- 1181번: 문자열 정렬 문제 -> ignore 함수로 getline을 사용한 뒤의 개행문자 삭제 가능. sort 함수의 이해, erase 함수를 이용하여 중복 문자 제거. 벡터를 이용하여 벡터에 익숙해지고자 했음. ${\textsf{\color{magenta}**!! 다시 보기 !!**}}$
---

## Class 3++