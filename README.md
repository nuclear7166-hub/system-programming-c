# C Modular System Design — sys1

센서·모터·제어 로직을 모듈로 분리한 C 언어 시스템 설계 실습 프로젝트입니다.  
임베디드 시스템에서 자주 쓰이는 레이어 분리 패턴을 C로 직접 구현했습니다.

![Language](https://img.shields.io/badge/Language-C-blue?style=flat)
![Topic](https://img.shields.io/badge/Topic-Modular%20Design-lightgrey?style=flat)
![Topic](https://img.shields.io/badge/Topic-Embedded%20Pattern-orange?style=flat)

---

# 📚 학습 내용 요약

## 모듈화 설계 (Modular Design)

* 센서 / 모터 / 제어 / 시스템 레이어 명확히 분리
* 각 모듈은 독립적인 `.c` / `.h` 쌍으로 구성

## 전역 상태 공유 (Global State)

* `SystemState` 구조체 하나로 시스템 상태 관리
* `extern` 키워드를 통한 모듈 간 데이터 공유

## 타입 추상화 (Type Abstraction)

* `u8` / `u16` / `u32` — 임베디드 환경 스타일 타입 재정의
* 이식성과 가독성 향상

## 헤더 가드 (Header Guard)

* `#ifndef` / `#define` / `#endif` 적용
* 중복 include 방지

---

# 📂 파일 구조

```
c-modular-system/
│
├── main.c          # 진입점: 초기화 → 제어 루프
├── types.h         # 공통 타입 정의 (u8 / u16 / u32)
│
├── system.h        # 전역 상태 구조체 선언
├── system.c        # gSystem 전역 변수 정의
│
├── sensor.h
├── sensor.c        # 센서 초기화 / 읽기
│
├── motor.h
├── motor.c         # 모터 초기화 / 속도 제어
│
├── control.h
├── control.c       # 센서→모터 제어 흐름 조율
│
├── config.h        # 시스템 설정 상수
└── README.md
```

---

# 🔧 시스템 구조

```
main()
 ├── sensor_init()
 ├── motor_init()
 └── while(1)
      └── control_update()
           ├── sensor_read()       → gSystem.sensor_value 갱신
           └── motor_control()     → gSystem.motor_speed = sensor_value × 2
```

전역 상태는 `SystemState gSystem` 하나로 관리하며,  
각 모듈은 이 구조체를 통해 데이터를 공유합니다.

---

# 🔑 핵심 코드 스니펫

**전역 상태 구조체 (SystemState)**
```c
// system.h
typedef struct {
    int sensor_value;
    int motor_speed;
    int system_state;
} SystemState;

extern SystemState gSystem;  // 모든 모듈이 공유
```

**공통 타입 재정의 (types.h)**
```c
typedef unsigned char  u8;
typedef unsigned short u16;
typedef unsigned int   u32;
```

**제어 루프 (control.c)**
```c
void control_update() {
    sensor_read();     // gSystem.sensor_value 갱신
    motor_control();   // motor_speed = sensor_value * 2
}
```

---

# ⚙️ 빌드 & 실행

```bash
gcc main.c system.c sensor.c motor.c control.c -o sys1
./sys1
```

**예상 출력**
```
Sensor Init
Motor Init
Sensor : 50
Motor  : 100
...
```

---

# ⚠️ GitHub 업로드 전 체크리스트

| 항목 | 내용 |
|---|---|
| ❌ `.exe` 제외 | 빌드 결과물은 올리지 않기 |
| ❌ `.o` 제외 | 오브젝트 파일 제외 |
| ❌ `.layout` / `.dev` 제외 | Dev-C++ IDE 설정 파일 제외 |
| ✅ `.gitignore` 추가 | 아래 내용 참고 |

**.gitignore 예시**
```
*.exe
*.o
*.layout
*.dev
```

---

# 🛠️ 사용 기술

![C](https://img.shields.io/badge/Language-C-blue?style=flat)
![Dev-C++](https://img.shields.io/badge/IDE-Dev--C%2B%2B-orange?style=flat)

---

# 🎯 학습 목적

* 임베디드 시스템에서 사용하는 모듈 분리 패턴 체득
* `extern` + 구조체를 활용한 전역 상태 관리 이해
* 헤더 가드 및 타입 추상화 습관 형성
* 센서 → 제어 → 모터 데이터 흐름 직접 설계

---

# 🚀 앞으로 추가 예정

* 인터럽트 기반 센서 읽기 구조로 확장
* RTOS 태스크 분리 연동
* FPGA / Vitis 드라이버와 연결 실습

---

# 📌 Note

학습 목적으로 작성된 코드들이며,  
기초 개념 이해와 실습 과정 중심으로 정리되어 있습니다.

지속적으로 업데이트 예정입니다 ✨
