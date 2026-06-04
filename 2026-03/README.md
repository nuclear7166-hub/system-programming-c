# 0209 - Embedded C Programming Study

C/C++ 프로그래밍 기초부터 포인터, 동적 메모리, 구조체, 함수 포인터, 상태 머신(State Machine) 및 모듈화 프로그래밍까지 학습한 내용을 정리한 폴더입니다.

단순 문법 학습을 넘어 임베디드 시스템 개발에 필요한 프로그래밍 기초 역량을 쌓는 것을 목표로 하였습니다.

---

# 📚 Learning Topics

## Basic C Programming

기본적인 C 언어 문법 및 제어문 실습

### 주요 파일

- 구구단.cpp
- sum.cpp
- coding.cpp
- 시험점수등급.cpp
- 시험점수등급 switch.cpp
- 문제맞추기.cpp

### 학습 내용

- 변수와 자료형
- 조건문(if, switch)
- 반복문(for, while)
- 사용자 입력 처리
- 간단한 알고리즘 구현

---

## Pattern Practice

반복문을 활용한 패턴 출력 실습

### 주요 파일

- 별.cpp
- 별1~5.cpp
- 별5~1.cpp
- 별 2개씩 늘어나는모양.cpp

### 학습 내용

- 중첩 반복문
- 패턴 생성 알고리즘
- 출력 제어

---

## Array

배열 및 데이터 처리 실습

### 주요 파일

- array.cpp
- array2.cpp
- array3.cpp
- array4.cpp
- array5.cpp
- array6.cpp

### 학습 내용

- 1차원 배열
- 배열 탐색
- 배열 데이터 처리
- 최대값 / 최소값 탐색

---

## Two-Dimensional Array

2차원 배열 실습

### 주요 파일

- 2차원.cpp
- 2차원2.cpp
- 2차원배열.cpp
- 2차원배열2.cpp

### 학습 내용

- 2차원 배열 선언
- 행렬 데이터 처리
- 중첩 반복문 활용

---

## Function

함수 활용 실습

### 주요 파일

- add sub mul div.cpp
- subroutine.cpp

### 학습 내용

- 함수 정의
- 함수 호출
- 매개변수 전달
- 반환값 처리

---

## Pointer

포인터 기초 실습

### 주요 파일

- 포인트.cpp
- void 포인터.cpp
- void void void.cpp
- 이중포인터.cpp

### 학습 내용

- 포인터 변수
- 주소 연산
- Void Pointer
- Double Pointer

---

## Dynamic Memory Allocation

동적 메모리 할당 실습

### 주요 파일

- malloc.cpp

### 학습 내용

- malloc()
- calloc()
- free()
- Heap Memory 이해

---

## Structure

구조체 활용 실습

### 주요 파일

- struct.cpp
- struct1.cpp
- structpoint.cpp

### 학습 내용

- 사용자 정의 자료형
- 데이터 그룹화
- 구조체 배열
- 구조체 포인터

---

## Union

공용체 실습

### 주요 파일

- union1.cpp

### 학습 내용

- 메모리 공유
- 구조체와 공용체 비교
- 메모리 최적화 개념

---

## Enumeration

열거형 실습

### 주요 파일

- enum1.cpp

### 학습 내용

- enum 사용법
- 상태 정의
- Symbolic Constant 활용

---

## Function Pointer

함수 포인터 실습

### 주요 파일

- 함수포인터.cpp
- 함수포인터2.cpp
- 함수포인터3.cpp
- 함수포인터4.cpp
- 함수포인터5.cpp
- 함수포인터6.cpp
- 함수포인터7.cpp
- 함수포인터8.cpp
- 함수포인터9.cpp

### 학습 내용

- 함수 포인터 선언
- 함수 포인터 배열
- 함수 선택 실행
- 콜백 함수 구현 기초

---

## Callback Function

콜백 함수 실습

### 주요 파일

- 콜백함수.cpp
- 콜백함수2.cpp
- 콜백함수3.cpp

### 학습 내용

- Callback Function
- 이벤트 처리 방식
- 함수 포인터 응용

---

## State Machine

상태 머신 설계 실습

### 주요 파일

- statemachine.cpp

### 학습 내용

- Finite State Machine(FSM)
- 상태 전이(State Transition)
- 임베디드 제어 로직 구현

---

## Miscellaneous

기타 실습 코드

### 주요 파일

- subway.cpp
- subway2.cpp
- sleep.cpp
- 아스키코드.cpp
- 대한민국.cpp
- 0310예제.cpp
- 0318.cpp

### 학습 내용

- 문자열 처리
- 문자 코드(ASCII)
- 시간 지연 처리
- 다양한 C 프로그래밍 응용

---

# 📂 Multi-File Project

## Project 0310

### 구성

```text
project0310/
├── main.c
├── a.c
└── a.h
```

### 학습 내용

- Header File 분리
- Source File 분리
- 다중 파일 프로젝트 구성

---

## Project 0312

### 구성

```text
project0312/
├── main1.c
├── data.c
└── data.h
```

### 학습 내용

- 데이터 관리 모듈
- 모듈화 프로그래밍

---

## Project 0312-1

### 구성

```text
project0312-1/
├── main.c
├── sensor.c
├── motor.c
├── system.c
└── system.h
```

### 학습 내용

- Sensor Module
- Motor Module
- System Module
- 임베디드 소프트웨어 구조 설계

---

## Project 0312-2

### 구성

```text
project0312-2/
├── control.c
├── motor.c
├── sensor.c
├── system.c
├── config.h
└── main1.c
```

### 학습 내용

- Control Module
- Sensor Interface
- Motor Control
- 시스템 아키텍처 설계
- 모듈 간 인터페이스 설계

---

# 🛠 Development Environment

- C Language
- C++
- GCC Compiler
- Dev-C++

---

# 🎯 Skills Acquired

- C Programming
- C++ Basic Programming
- Memory Management
- Pointer Handling
- Dynamic Memory Allocation
- Data Structure Fundamentals
- Function Pointer
- Callback Function
- State Machine Design
- Modular Programming
- Embedded Software Architecture

---

# 🚀 Future Learning Path

- STM32
- AVR
- UART Communication
- SPI Communication
- I2C Communication
- CAN Communication
- RTOS
- Embedded Linux
- Device Driver Development

---

# 📌 Note

본 폴더는 임베디드 시스템 개발을 위한 C 프로그래밍 학습 과정에서 작성한 실습 코드들을 정리한 공간입니다.

포인터, 메모리 관리, 함수 포인터, 상태 머신 및 모듈화 프로그래밍을 중심으로 학습하였으며 향후 MCU, FPGA 및 임베디드 시스템 개발을 위한 기초 역량을 쌓는 것을 목표로 합니다.
