# 2021 기출 01회 해설

### 문제 1

다음이 설명하는 프로토콜의 명칭을 영문 약어로 작성하시오

```
인터넷 환경에서의 호스트 상호 간 통신에서 상대방 호스트의 데이터링크 주소로부터 IP 주소를 필요에 따라 역동적으로 얻기 위한 절차를 제공하는 프로토콜(IETF RFC 903)이다
```

야, 문제 봤냐? 딱 보니까 MAC 주소, 그러니까 니 컴퓨터 랜카드 고유번호 같은 걸로 IP 주소 알아내는 프로토콜이 뭐냐고 묻는 거 아니냐? ㅋㅋㅋ

보통 우리가 아는 ARP는 IP 주소 던져주고 "야 이 IP 쓰는 놈 MAC 주소 뭐냐?" 하고 물어보는 건데, 이건 완전 반대잖아. MAC 주소는 아는데 "그래서 이놈 IP가 뭔데?" 이걸 알아내는 거지.

이런 걸 뭐라고 하겠냐? ARP를 뒤집었으니까 Reverse ARP라고 하지 않겠냐? ㅋㅋㅋ 그래서 정답은 **RARP** 다. 쉽지?

**주요 포인트:**
*   RARP는 데이터링크 주소(MAC 주소)를 IP 주소로 변환하는 프로토콜이다.
*   ARP(IP 주소 -> MAC 주소)의 반대 기능을 수행한다.
*   RFC 903에서 정의되었다.

---

### 문제 2

다음은 데이터베이스 설계 과정을 순서에 관계 없이 나열하고 설명한 것이다. 빈칸에 들어갈 알맞은 말을 순서대로 작성하시오

```
1. 요구조건 분석 : 데이터베이스의 사용자, 사용 목적, 사용 범위, 제약 조건 등에 대한 내용을 정리하고 명세서를 작성한다.
2. (1) : 자료를 컴퓨터가 이해할 수 있도록 특정 DBMS의 논리적 자료 구조로 변환하는 과정이다. 관계형 데이터베이스인 경우 이 단계에서 테이블을 설계하고, 정규화 과정을 거치게 된다.
3. (2) : 정보를 구조화 하기 위해 추상적 개념으로 표현하는 과정으로 개체-관계 다이어그램을 이용하여 설계한다.
4. (3) : 데이터를 실제 저장 장치에 저장하기 위한 구조로 데이터를 변환하는 단계이며, 데이터베이스 파일의 저장 구조 및 액세스 경로, 인덱스의 구조와 저장 레코드의 크기, 순서, 접근 경로 등을 결정하고, 반응 시간, 공간 활용도, 트랜잭션 처리량을 고려하여 설계를 하여야 한다.
5. 구현 : 데이터베이스 스키마를 실제로 생성하는 단계이다. 스키마 생성 후 초기 데이터를 입력하게 된다.
```

야 ㅋㅋ 이거 데이터베이스 설계 순서 물어보는 거네. 순서가 뒤죽박죽 섞여있으니까 정신 똑바로 차리고 봐야 한다.

1.  **요구조건 분석:** 이건 뭐 문제에 설명 잘 돼 있으니까 패스. 사용자가 뭘 원하는지 파악하는 단계지.
2.  **(1):** 봐봐. "특정 DBMS", "논리적 자료 구조", "테이블 설계", "정규화" 이런 얘기 나오잖아. 이건 딱 봐도 **논리적 설계** 아니냐? 개념적인 걸 실제 DBMS에 맞게 바꿔주는 단계라고.
3.  **(2):** "추상적 개념", "개체-관계 다이어그램(ERD)" 딱 나오네. 이건 **개념적 설계**지. 현실 세계를 모델링하는 단계잖아. 그림 그리고 그러는 거.
4.  **(3):** "실제 저장 장치", "저장 구조", "액세스 경로", "인덱스" 이런 건 진짜 하드디스크에 어떻게 때려 박을지 정하는 거 아니냐? 그러니까 이건 **물리적 설계** 단계지. 성능까지 생각해야 하는 거.
5.  **구현:** 이건 뭐 스키마 만들고 데이터 넣는 거니까 설명 그대로고.

자, 그럼 빈칸 순서대로 뭐가 들어가야겠냐?

(1)은 **논리적 설계**
(2)는 **개념적 설계**
(3)은 **물리적 설계**

이렇게 되는 거지.

**주요 포인트:**
*   데이터베이스 설계 순서: 요구조건 분석 -> 개념적 설계 -> 논리적 설계 -> 물리적 설계 -> 구현
*   **개념적 설계:** 현실 세계를 추상적 모델로 표현 (ERD 사용)
*   **논리적 설계:** 개념적 모델을 특정 DBMS에 맞는 논리적 구조(테이블 등)로 변환 (정규화 수행)
*   **물리적 설계:** 논리적 구조를 실제 저장 장치에 저장할 물리적 구조로 변환 (성능 고려)

---

### 문제 3

웹 서비스 기본 구조 및 구성요소 중 웹 서비스명, 웹 서비스 제공 위치, 웹 서비스 메시지 포맷, 프로토콜 정보 등 웹 서비스에 대한 상세 정보를 기술한 파일로 XML 형식으로 구현한 웹 서비스 명은 무엇인지 영문 약어로 작성하시오

야 ㅋㅋ 이거 딱 보면 웹 서비스 설명서 이름 물어보는 거잖아. XML로 만들었고, 그 안에 서비스 이름이 뭐고, 어디 붙어야 하고, 메시지는 어떤 모양이고, 통신은 뭘로 하는지 다 적어놓은 거.

이게 뭐겠냐? 웹 서비스 기술 언어(Web Services Description Language) 아니겠냐? ㅋㅋㅋ 이걸 줄여서 **WSDL**이라고 부른다.

SOAP 메시지 보내려면 이 WSDL 파일 보고 어떻게 보내야 하는지 알아내는 거지. 이 정도는 알아야 웹 서비스 좀 안다고 할 수 있지 않겠냐? ㅋㅋ

**주요 포인트:**
*   WSDL은 웹 서비스에 대한 상세 정보(서비스명, 위치, 메시지 포맷, 프로토콜 등)를 기술하는 XML 기반 언어이다.
*   Web Services Description Language의 약자이다.
*   클라이언트가 웹 서비스와 상호작용하는 방법을 이해하는 데 사용된다.

---

### 문제 4

다음 설명은 요구사항 분류에 관한 지식 관련 내용이다. 빈칸에 들어갈 알맞은 용어를 작성하시오

```
요구사항 분석 단계에서는 사용자의 요구사항을 검토하고 이 요규사항의 해결 방안을 찾기 위하여 시스템이 수행해야 할 기능을 정의해야 하는데, 이를 (1)라고 한다.
또한 시스템과 관련되는 여러 가지 제약 사항과 시스템 운영 시의 성능에 대한 요구사항을 정의해야 하는데, 이를 (2)라고 한다.
시스템 기초 조사에서 획득한 정보를 기초로 현업의 요구사항을 결정하고 정의하며, 이 요구사항을 어떤 시스템에서 처리할 것인지를 분석한다. 그리고 요구사항을 해결하기 위하여 다양한 대안을 제시하고 최선의 방안을 수립해서 시스템 설계에 반영한다.
```

야 이거 요구사항 종류 물어보는 거네 ㅋㅋ 딱 보니까 두 가지로 나누는 거 같은데?

첫 번째 빈칸 (1) 봐봐. "시스템이 수행해야 할 기능"을 정의한대잖아. 시스템이 **뭘** 해야 하는지, 어떤 **기능**이 있어야 하는지를 말하는 거지. 이런 걸 뭐라고 하겠냐? 당연히 **기능 요구사항**이지 ㅋㅋㅋ 사용자가 "이런 기능 만들어줘!" 하는 것들 말이야.

두 번째 빈칸 (2)는 "제약 사항"이랑 "성능"에 대한 요구사항이래. 이건 시스템이 **어떻게** 동작해야 하는지, 예를 들어 "응답 시간은 1초 안에!", "동시 접속자 100명은 버텨야 함!", "보안은 이 정도로!" 이런 거잖아. 기능 자체는 아닌데, 시스템이 지켜야 할 품질이나 조건 같은 거지. 이런 걸 **비기능 요구사항**이라고 한다. 기능 빼고 나머지 다~ 라고 생각하면 편해.

그래서 빈칸 순서대로 답은 **기능 요구사항**, **비기능 요구사항** 이거다. 알겠냐?

**주요 포인트:**
*   **기능 요구사항 (Functional Requirement):** 시스템이 반드시 수행해야 하는 기능, 사용자가 시스템을 통해 무엇을 할 수 있는지에 대한 요구사항. (What the system should do)
*   **비기능 요구사항 (Non-Functional Requirement):** 시스템의 품질, 성능, 보안, 안정성, 제약 조건 등 기능 외적인 요구사항. (How the system should perform)
*   요구사항 분석 단계에서 이 두 가지를 명확히 구분하여 정의한다.

---

### 문제 5

다음 Python 프로그램의 실행 결과를 작성하시오

```python
class city:
    a=["Seoul", "Masan", "Pusan", "Incheon", "Daegu"]
my = city()
fchar = ""
for i in my.a:
    fchar = fchar + i[0]
print(fchar)
```

야 ㅋㅋ 파이썬 코드네. 이거 뭐 하는 놈인지 함 보자.

`city`라는 클래스를 만들고 그 안에 `a`라는 리스트를 박아놨네. 도시 이름들이 들어있구만. "Seoul", "Masan", "Pusan", "Incheon", "Daegu".

`my = city()` 이걸로 `city` 클래스 찍어내서 `my`라는 변수에 넣었고.

`fchar = ""` 이건 빈 문자열 하나 만들어 둔 거고.

`for i in my.a:` 이게 핵심인데, `my` 안에 있는 `a` 리스트를 하나씩 꺼내서 `i`에 넣고 돌리는 거잖아.

`fchar = fchar + i[0]` 여기서 `i`가 도시 이름 문자열이니까 `i[0]`은 그 문자열의 첫 글자겠지? 그걸 계속 `fchar`에다가 이어 붙이는 거네.

자 그럼 순서대로 보자.
1.  "Seoul" -> 첫 글자 'S' -> `fchar`는 "S"
2.  "Masan" -> 첫 글자 'M' -> `fchar`는 "SM"
3.  "Pusan" -> 첫 글자 'P' -> `fchar`는 "SMP"
4.  "Incheon" -> 첫 글자 'I' -> `fchar`는 "SMPI"
5.  "Daegu" -> 첫 글자 'D' -> `fchar`는 "SMPID"

루프 다 돌고 마지막에 `print(fchar)` 하니까 결국 **SMPID** 이게 출력되겠네. ㅋㅋㅋ 쉽구만.

**주요 포인트:**
*   클래스 변수(`a`)에 접근하여 사용한다.
*   `for` 루프를 사용하여 리스트의 각 요소를 순회한다.
*   문자열 인덱싱(`i[0]`)을 사용하여 문자열의 첫 번째 문자를 가져온다.
*   문자열 덧셈(+)을 사용하여 문자열을 이어 붙인다.
*   최종적으로 리스트 각 요소의 첫 글자를 모은 문자열이 출력된다.

---

### 문제 6

다음 [직원] 테이블에서 <SQL 쿼리>를 실행했을 때의 결과를 작성하시오

```
[직원]
| EMP_NO | EMP_NAME | EMP_EDPT | EMP_SAL |
| 100 | 김성모 | 총무 | 2500 |
| 200 | 이재후 | 총무 | 3100 |
| 300 | 이준형 | 인사 | 2900 |
| 400 | 성우람 | 인사 | 2700 |
| 500 | 홍찬중 | 기획 | 2800 |
```
```sql
<SQL 쿼리>
SELECT COUNT(*) FROM 직원
WHERE EMP_NO > 100 AND EMP_SAL >= 3000 OR EMP_NO = 200;
```

야 ㅋㅋ SQL 문제네. 이거 [직원] 테이블 주고 쿼리 날리면 결과가 뭐냐 이거지?

쿼리부터 보자.
`SELECT COUNT(*)`: 일단 결과는 테이블 자체가 아니라, 조건에 맞는 행(row) 개수가 나온다는 거네.
`FROM 직원`: [직원] 테이블에서 뽑는 거고.
`WHERE EMP_NO > 100 AND EMP_SAL >= 3000 OR EMP_NO = 200`: 이게 조건인데, `AND`랑 `OR`이 섞여 있네. SQL에서는 `AND`가 `OR`보다 먼저 계산된다는 걸 알아야지 ㅋㅋ

그러니까 조건은 사실 이거랑 같은 거야: `(EMP_NO > 100 AND EMP_SAL >= 3000) OR (EMP_NO = 200)`

이제 테이블 보면서 한 줄씩 따져보자.

1.  **김성모 (EMP_NO=100, EMP_SAL=2500):**
    *   `(100 > 100 AND 2500 >= 3000)` -> `(False AND False)` -> `False`
    *   `(100 = 200)` -> `False`
    *   `False OR False` -> `False`. 얘는 탈락.

2.  **이재후 (EMP_NO=200, EMP_SAL=3100):**
    *   `(200 > 100 AND 3100 >= 3000)` -> `(True AND True)` -> `True`
    *   `(200 = 200)` -> `True`
    *   `True OR True` -> `True`. 얘는 당첨!

3.  **이준형 (EMP_NO=300, EMP_SAL=2900):**
    *   `(300 > 100 AND 2900 >= 3000)` -> `(True AND False)` -> `False`
    *   `(300 = 200)` -> `False`
    *   `False OR False` -> `False`. 얘도 탈락.

4.  **성우람 (EMP_NO=400, EMP_SAL=2700):**
    *   `(400 > 100 AND 2700 >= 3000)` -> `(True AND False)` -> `False`
    *   `(400 = 200)` -> `False`
    *   `False OR False` -> `False`. 역시 탈락.

5.  **홍찬중 (EMP_NO=500, EMP_SAL=2800):**
    *   `(500 > 100 AND 2800 >= 3000)` -> `(True AND False)` -> `False`
    *   `(500 = 200)` -> `False`
    *   `False OR False` -> `False`. 마지막도 탈락.

자, 조건에 맞는 놈은 이재후 딱 한 명이지? 근데 `SELECT COUNT(*)`니까 결과는 행 개수를 써야지.

그래서 결과는 **1** 이다.

**주요 포인트:**
*   `SELECT COUNT(*)`는 조건에 맞는 행의 개수를 반환한다.
*   `WHERE` 절의 조건식을 평가할 때 `AND` 연산자가 `OR` 연산자보다 우선순위가 높다.
*   `WHERE (조건1 AND 조건2) OR 조건3` 형태로 조건을 해석하고 각 행에 적용하여 만족하는지 확인한다.

---

### 문제 7

다음 Java 프로그램의 실행 결과를 작성하시오

```java
public class Main {
    public static void main(String[] args) throws Exception {
        int array[][] = {{15, 17, 19}, {25}};
        System.out.println(array[0].length);
        System.out.println(array[1].length);
        System.out.println(array[0][0]);
        System.out.println(array[0][1]);
        System.out.println(array[1][0]);
    }
}
```

야 ㅋㅋ 자바 코드 나왔네. 이거 돌리면 뭐 나올지 함 까보자고.

`int array[][] = {{15, 17, 19}, {25}};`
이거 2차원 배열인데, 모양이 좀 이상하게 생겼지? ㅋㅋㅋ 첫 줄(`array[0]`)은 3칸짜리 `{15, 17, 19}`고, 두 번째 줄(`array[1]`)은 1칸짜리 `{25}`다 이 말이야. 이런 걸 '래기드 배열(ragged array)' 또는 '가변 배열'이라고도 하는데, 뭐 이름이 중요한 건 아니고 ㅋㅋ 각 줄 길이가 다를 수 있다는 게 포인트지.

자 이제 출력문 하나씩 보자.

1.  `System.out.println(array[0].length);`
    *   `array[0]`은 첫 번째 줄 `{15, 17, 19}` 이걸 가리키잖아.
    *   `.length`는 배열 길이니까, 이 줄엔 원소가 3개 있네.
    *   그러니까 **3** 출력.

2.  `System.out.println(array[1].length);`
    *   `array[1]`은 두 번째 줄 `{25}` 이걸 가리키고.
    *   이 줄엔 원소가 1개 있네.
    *   그러니까 **1** 출력.

3.  `System.out.println(array[0][0]);`
    *   `array[0]`은 첫 번째 줄 `{15, 17, 19}`.
    *   `[0]`은 그 줄의 첫 번째(0번 인덱스) 원소니까 **15**네.
    *   **15** 출력.

4.  `System.out.println(array[0][1]);`
    *   `array[0]`은 여전히 첫 번째 줄 `{15, 17, 19}`.
    *   `[1]`은 그 줄의 두 번째(1번 인덱스) 원소니까 **17**이구만.
    *   **17** 출력.

5.  `System.out.println(array[1][0]);`
    *   `array[1]`은 두 번째 줄 `{25}`.
    *   `[0]`은 그 줄의 첫 번째(0번 인덱스) 원소니까 **25**지.
    *   **25** 출력.

`println`이니까 한 줄씩 출력될 거 아냐? 그럼 결과는 이렇게 나오겠네.

```
3
1
15
17
25
```

**주요 포인트:**
*   Java에서 2차원 배열을 선언하고 초기화하는 방법.
*   각 행(row)의 길이가 다른 2차원 배열(ragged array)을 이해해야 한다.
*   `array[i]`는 i번째 행(배열)을 나타낸다.
*   `array[i].length`는 i번째 행의 원소 개수(길이)를 반환한다.
*   `array[i][j]`는 i번째 행의 j번째 열(인덱스)에 있는 원소 값을 나타낸다.
*   `System.out.println()`은 출력 후 줄바꿈을 수행한다.

---

### 문제 8

데이터베이스의 정규화에 충실하여 모델링을 수행하면 종속성, 활용성은 향상되나 수행 속도가 느려지는 경우가 발생하여 이를 극복하기 위해 성능에 중점을 두어 정규화하는 방법을 무엇이라 하는지 작성하시오

야 ㅋㅋ 이거 정규화 빡세게 했더니 느려 터져서 일부러 좀 풀어주는 거 뭐냐고 묻는 거잖아?

정규화라는 게 원래 데이터 중복 줄이고 깔끔하게 만들어서 데이터 꼬이는 거 막으려고 하는 거 아니냐? 근데 너무 잘게 쪼개놓으면 나중에 데이터 뽑아올 때 테이블 막 여러 개 JOIN 걸어야 해서 속도가 개느려질 수 있단 말이지.

그래서 "아오 속 터져! 그냥 좀 합치고 중복 좀 만들더라도 빨리 조회되게 하자!" 이렇게 정규화 원칙을 일부러 좀 어겨서 성능을 끌어올리는 작업을 하는 경우가 있어. 데이터 무결성은 좀 깨질 수 있어도 일단 속도가 중요할 때 쓰는 거지.

이런 걸 바로 **반정규화 (Denormalization)** 라고 부른다 이 말이야. 성능 때문에 어쩔 수 없이 하는 거지 뭐. ㅋㅋ

**주요 포인트:**
*   **반정규화 (Denormalization):** 데이터베이스 성능 향상을 위해 의도적으로 정규화 원칙을 위배하는 행위.
*   **목적:** 조회 성능 개선 (JOIN 연산 감소 등).
*   **단점:** 데이터 중복 증가, 데이터 무결성 저해 가능성 (이상 현상 발생 가능).
*   정규화를 거친 후 성능상 이슈가 있을 때 고려한다.

---

### 문제 9

다음은 블랙박스 검사 기법의 종류에 대한 설명이다. 빈칸에 들어갈 검사 방법을 순서대로 작성하시오

```
블랙박스 검사의 기법 중 (1)는 입력 조건 경계에서 오류가 발생할 확률이 크다는 것을 이용하여 검사하는 방법이다. 예를 들어 입력 유효값 X가 0 <= X <= 100이라면 -1, 0, 1, 99, 100, 101과 같은 입력으로 테스트하는 방법이다.
그리고 (2)는 입력 자료에 초점을 맞춰 테스트 케이스를 만들고 검사하는 방법으로, 입력 조건에 타당한 입력 자료와 그렇지 않은 자료의 개수를 균등하게 분할해 테스트 케이스를 정하는 방법이다.
```

야 ㅋㅋ 이거 블랙박스 테스트 종류 물어보는 거네. 빈칸 채우기 함 해보자.

첫 번째 빈칸 (1) 봐봐. "입력 조건 경계"에서 오류 잘 난다고? 그러면서 예시로 0부터 100까지면 -1, 0, 1 이랑 99, 100, 101 이런 걸로 테스트한대잖아. 딱 봐도 경계값 위주로 조지는 거지. ㅋㅋ 이런 걸 **경계값 분석 (Boundary Value Analysis)** 이라고 한다. 제일 끄트머리 값들이 문제 잘 일으키니까 거기 집중하는 거야.

두 번째 빈칸 (2)는 "입력 자료에 초점"을 맞추고 "타당한 입력 자료"랑 "그렇지 않은 자료"로 나눠서 테스트한대. 비슷한 놈들끼리 그룹으로 묶어서 그중 대표 하나씩만 테스트하는 방식이잖아? 이걸 **동치 분할 (Equivalence Partitioning)** 또는 **동등 분할** 이라고 한다. 모든 입력값을 다 테스트할 순 없으니까, 비슷한 결과 나올 것 같은 애들은 하나로 퉁쳐서 대표 선수만 뽑아 테스트하는 효율적인 방법이지.

그래서 순서대로 답은 **경계값 분석**, **동치 분할** (또는 동등 분할) 이다.

**주요 포인트:**
*   **(1) 경계값 분석 (Boundary Value Analysis):** 입력 조건의 경계값을 중심으로 테스트 케이스를 선정하는 기법. 오류는 경계값 부근에서 발생할 확률이 높다는 점을 이용한다.
*   **(2) 동치 분할 (Equivalence Partitioning) / 동등 분할:** 입력 데이터를 유사한 결과가 예상되는 그룹(동치 클래스)으로 나누고, 각 그룹에서 대표값을 선정하여 테스트하는 기법. 테스트 케이스 수를 줄여 효율성을 높인다.
*   두 기법 모두 블랙박스 테스트의 대표적인 방법이며, 종종 함께 사용된다.

---

### 문제 10

다음은 테스트 유형에 대한 설명이다. 빈칸에 들어갈 알맞은 테스트 유형을 <보기>에서 골라 순서대로 작성하시오

```
(1)은 모듈 혹은 네트워크 단일 노드 내 기능이 요구사항에 부합되는지를 테스트하기 위한 것이다. 코딩 단계와 병행해서 수행되며, 모듈은 독자적으로 운용되는 프로그램이 아닌 시스템의 일부이기 때문에 모듈을 가동하는 가동기와 타 모듈들을 흉내 내는 가짜 모듈들이 필요하다.
(2)는 소프트웨어 각 모듈 간의 인터페이스 관련 오류 및 결함을 찾아내기 위한 체계적인 테스트 기법이다. (1)가 끝난 모듈 또는 컴포넌트의 프로그램이 설계 단계에서 제시한 애플리케이션과 동일한 구조와 기능으로 구현된 것인지를 확인하는 것이다.
```
```
<보기>
시스템 테스트, 통합 테스트, 단위 테스트, 인수 테스트
```

야 ㅋㅋ 이거 테스트 종류 맞추는 거네? <보기>에서 골라 쓰는 거 쉽지?

첫 번째 (1) 봐봐. "모듈", "네트워크 단일 노드", "코딩 단계랑 병행", "가동기(드라이버)랑 가짜 모듈(스텁)" 이런 말 나오잖아? 이건 딱 봐도 제일 작은 덩어리, 즉 **단위**를 테스트하는 **단위 테스트**지. 개발자가 코드 짜면서 바로바로 하는 거.

두 번째 (2)는 "모듈 간의 인터페이스" 오류 찾는 거래. (1)에서 테스트한 단위(모듈)들을 합쳐서 서로 데이터 잘 주고받고 문제없는지 확인하는 거 아니냐? 모듈들을 **통합**해서 테스트하는 거니까 이건 **통합 테스트**지.

그래서 순서대로 답은 **단위 테스트**, **통합 테스트** 이게 답이다. <보기>에도 딱 있네 ㅋㅋ

**주요 포인트:**
*   **(1) 단위 테스트 (Unit Test):** 소프트웨어 구현 단계에서 개별 모듈(컴포넌트, 함수 등 가장 작은 단위)의 기능을 검증하는 테스트. 스텁(Stub)과 드라이버(Driver)가 필요할 수 있다.
*   **(2) 통합 테스트 (Integration Test):** 단위 테스트가 완료된 모듈들을 결합하여 모듈 간의 인터페이스 및 상호작용이 정상적으로 이루어지는지 검증하는 테스트.
*   일반적인 테스트 순서: 단위 테스트 -> 통합 테스트 -> 시스템 테스트 -> 인수 테스트.

---

### 문제 11

다음 IP의 설명 중 빈칸에 들어갈 알맞은 숫자를 순서대로 작성하시오

```
- IPv6는 IPv4의 한계인 주소 표현의 제약으로 인한 주소 고갈, 멀티미디어 서비스 대응 미약 등의 문제점을 해결하기 위하여 IETF에서 표준화시킨 인터넷 프로토콜이다. IPv6는 16bit 단위로 8부분으로 표시하며 총 (1)bit 주소 공간을 제공하며, 다수의 사용자들에게 전송할 수 있는 멀티캐스트 기능, 기본 헤더의 단순화와 유연함, 인증, 암호화, 무결성 기능 제공, 서비스 품질의 보장 등의 다양한 이점을 갖는다.
- 반면, IPv4는 32bit를 (2)bit로 나누어 4개의 부분으로 구성된다.
```

야 ㅋㅋ 이거 IP 주소 길이 묻는 쌩기초 문제 아니냐? 이런 건 틀리면 안 되지 ㄹㅇ

첫 번째 빈칸 (1) 보자. IPv6인데, 16비트짜리가 8부분이래잖아. 그럼 그냥 곱하면 되지 않겠냐? 16 곱하기 8 하면 **128** 나오네. IPv6 주소는 128비트다 이거야. 겁나 길지? ㅋㅋㅋ

두 번째 빈칸 (2)는 IPv4다. 총 32비트인데 이걸 4부분으로 나눴대. 그럼 한 부분은 몇 비트겠냐? 32 나누기 4 하면 **8**이지. 우리가 맨날 보는 xxx.xxx.xxx.xxx 그게 각 xxx가 8비트씩 차지하는 거잖아. 0부터 255까지.

그래서 답은 순서대로 **128**, **8** 이다. 알겠냐?

**주요 포인트:**
*   IPv6 주소는 총 **128**비트 길이이며, 16비트씩 8부분으로 나누어 표현한다.
*   IPv4 주소는 총 **32**비트 길이이며, **8**비트씩 4부분으로 나누어 표현한다.
*   IPv6는 IPv4의 주소 고갈 문제를 해결하기 위해 등장했다.

---

### 문제 12

다음이 설명하는 용어를 작성하시오

```
- 모듈 간 통신 방식을 구현하기 위해 사용되는 대표적인 프로그래밍 인터페이스 집합으로, 복수의 프로세스를 수행하여 이뤄지는 프로세스 간 통신까지 구현이 가능하다.
- 대표 메소드에는 Shared Memory, Socket, Semaphores, Pipes & names Pipes, Message Queuing이 있다
```

야 ㅋㅋ 이거 딱 보니까 프로그램 덩어리들끼리 어떻게 말 섞는지 그거 물어보는 거네.

특히 "복수의 프로세스", "프로세스 간 통신" 이 말 나왔잖아? 서로 다른 프로그램(프로세스)끼리 데이터 주고받고 하는 거. 밑에 예시로 나온 공유 메모리(Shared Memory), 소켓(Socket), 세마포어(Semaphores), 파이프(Pipes), 메시지 큐(Message Queuing) 이딴 것들이 다 그런 거 할 때 쓰는 기술들이고.

이런 걸 퉁쳐서 뭐라고 부르겠냐? **프로세스 간 통신 (Inter-Process Communication)**, 줄여서 **IPC** 라고 한다. 이거 모르면 시스템 프로그래밍 쪽은 아예 발도 못 붙이지 ㅋㅋ

**주요 포인트:**
*   IPC는 프로세스 간 데이터 공유 및 통신을 위한 메커니즘 또는 인터페이스 집합이다.
*   서로 다른 프로세스가 협력하고 데이터를 교환할 수 있게 한다.
*   대표적인 방법으로 공유 메모리, 소켓, 세마포어, 파이프, 메시지 큐 등이 있다.

---

### 문제 13

기업, 기관, 단체 드에서 사용하는 모든 애플리케이션을 상호 연계하여 통합하는 것으로 여러 애플리케이션을 1:1로 직접 연결하는 Point-to-Point 방식과 중간에 단일 접점인 허브를 두고 1:N 구조로 연결하는 Hub and Spoke 방식 등이 있는 애플리케이션 연계 방법을 무엇이라 하느니 영문 약어로 작성하시오

야 ㅋㅋ 이거 딱 보니까 회사에 있는 온갖 프로그램들 하나로 묶는 거 뭐냐고 묻는 거잖아? 무슨 뭐 ERP니 CRM이니 SCM이니 하는 거 다 따로 놀면 개판이니까, 얘네끼리 서로 데이터 주고받고 일 처리하게끔 엮어주는 거지.

문제에서도 말했잖아. 일대일로 다이렉트로 꽂는 Point-to-Point 방식도 있고, 가운데 왕따 하나 세워놓고 걔 통해서 다 연결하는 Hub and Spoke 방식도 있고. 이런 시스템 통합하는 거.

이런 걸 싸잡아서 **EAI**라고 부른다. Enterprise Application Integration. 기업 애플리케이션 통합 뭐 그런 뜻이지.

**주요 포인트:**
*   EAI는 기업 내 다양한 애플리케이션(ERP, CRM, SCM 등)을 연계하고 통합하는 솔루션이다.
*   목표는 데이터 및 프로세스 통합을 통해 업무 효율성을 높이는 것이다.
*   대표적인 연계 방식에는 Point-to-Point와 Hub and Spoke가 있다.
*   Enterprise Application Integration의 약자이다.

---

### 문제 14

다음 [학생] 테이블의 카디널리티(Cardinality)와 디그리(Degree)를 작성하시오

```
[학생]
| 학번 | 이름 | 학년 | 학과 |
| 1234 | 이준모 | 1 | 경영 |
| 1357 | 김성혁 | 2 | 컴퓨터 |
| 4321 | 이호진 | 3 | 국문 |
| 8543 | 신정욱 | 4 | 영문 |
| 7542 | 고아림 | 2 | 간호 |
```

야 ㅋㅋ 이거 테이블 던져주고 카디널리티랑 디그리 묻는 거네. 데이터베이스 기본 중의 기본이지.

**카디널리티(Cardinality)** 이게 뭐냐면, 테이블에 데이터가 몇 줄 있냐 이거야. 행(Row) 개수, 다른 말로 튜플(Tuple) 개수라고도 하지. 저 [학생] 테이블 함 봐봐. 제목 줄 빼고 데이터가 총 몇 줄이냐? 이준모부터 고아림까지 세보면 **5**줄 있네. 그러니까 카디널리티는 **5**다.

**디그리(Degree)** 이건 뭐냐면, 테이블에 항목(속성)이 몇 개 있냐 이거야. 열(Column) 개수, 다른 말로 애트리뷰트(Attribute) 개수라고도 하고. [학생] 테이블에 보면 '학번', '이름', '학년', '학과' 이렇게 총 **4**개의 열이 있잖아? 그러니까 디그리는 **4**지.

그래서 답은
*   **카디널리티: 5**
*   **디그리: 4**

이렇게 된다. 쉽지? ㅋㅋ

**주요 포인트:**
*   **카디널리티 (Cardinality):** 릴레이션(테이블)에 포함된 튜플(행, Row)의 수.
*   **디그리 (Degree):** 릴레이션(테이블)을 구성하는 애트리뷰트(열, Column)의 수.

---

### 문제 15

다음 C언어 프로그램의 실행 결과를 작성하시오

```c
#include <stdio.h>
int main(void) {
    struct emp {
        char name[10];
        int age;
    }
    a[] = {"kihyun", 26, "woojae", 28, "subin", 32, "miyoung", 25};
    struct emp *p;
    p = a;
    p++;
    printf("%s\n", p->name);
    printf("%d\n", p->age);
    return 0;
}
```

야 ㅋㅋ C언어 코드네. 이거 구조체랑 포인터 가지고 장난치는 거 같은데 함 보자.

```c
struct emp {
    char name[10];
    int age;
}
```
이거 `emp`라는 이름표를 가진 구조체 틀 만든 거지. 이름 담을 문자 배열 `name`이랑 나이 담을 정수 `age`가 한 세트네.

```c
a[] = {"kihyun", 26, "woojae", 28, "subin", 32, "miyoung", 25};
```
이게 좀 중요한데, `emp` 구조체 **배열** `a`를 만드는 거야. 초기값을 쭉 나열했는데, 컴파일러가 알아서 2개씩(`name`, `age`) 묶어서 배열에 채워 넣는다.
*   `a[0]`에는 `{"kihyun", 26}`
*   `a[1]`에는 `{"woojae", 28}`
*   `a[2]`에는 `{"subin", 32}`
*   `a[3]`에는 `{"miyoung", 25}`
이렇게 총 4개짜리 구조체 배열이 되는 거지.

```c
struct emp *p;
p = a;
```
`emp` 구조체를 가리킬 수 있는 포인터 변수 `p`를 만들고, `p`가 배열 `a`의 시작 주소, 즉 `a[0]`을 가리키게 한 거야.

```c
p++;
```
이게 핵심인데, 포인터 `p`를 1 증가시켰잖아? 근데 `p`가 그냥 정수 포인터가 아니라 `struct emp` 포인터니까, 1 증가시키면 `struct emp` 하나 크기만큼 주소가 뒤로 밀리는 거야. 그래서 `p`는 이제 `a[0]` 다음 놈인 `a[1]`을 가리키게 된다.

```c
printf("%s\n", p->name);
```
`p`가 가리키는 구조체의 `name` 멤버를 출력하래. `p`는 지금 `a[1]`을 가리키니까 `a[1].name`인 **"woojae"**가 출력되겠지? `->` 쓰는 거 알지? 포인터로 구조체 멤버 접근할 때 쓰는 거.

```c
printf("%d\n", p->age);
```
이번엔 `p`가 가리키는 구조체의 `age` 멤버를 출력하래. `p`는 여전히 `a[1]`을 가리키니까 `a[1].age`인 **28**이 출력되겠네.

`\n` 때문에 한 줄씩 출력될 테니까, 결과는 이렇게 나오겠지.

```
woojae
28
```

**주요 포인트:**
*   C언어 구조체(struct) 정의 및 사용법.
*   구조체 배열의 초기화 방법.
*   구조체 포인터 선언 및 배열 주소 할당.
*   구조체 포인터 연산 (`p++`는 다음 구조체 요소로 이동).
*   포인터를 이용한 구조체 멤버 접근 (`->` 연산자).

---

### 문제 16

다음은 데이터 모델에 표시하여야 할 요소에 대한 설명으로 빈칸에 들어갈 알맞은 말을 작성하시오

```
- (1) : 논리적으로 표현된 개체 타입들 간의 관계로서 데이터 구조 및 정적 성질을 표현한다.
- (2) : 데이터베이스에 저장된 실제 데이터를 처리하는 작업에 대한 명세로서 데이터베이스를 조작하는 기본 도구이다.
- 제약 조건 : 데이터베이스에 저장될 수 있는 실제 데이터의 논리적인 제약 조건이다.
```

야 ㅋㅋ 이거 데이터 모델 구성 요소 3대장 물어보는 거네. 하나는 제약 조건이라고 이미 나와 있고 나머지 두 개 맞추는 거구만.

첫 번째 (1) 봐봐. "개체 타입 간의 관계", "데이터 구조", "정적 성질" 이런 얘기 나오잖아. 이게 뭐겠냐? 데이터가 어떤 모양으로 생겨 먹었고, 테이블끼리 어떻게 연결되는지 그 **구조**를 말하는 거지. ㅋㅋㅋ 그래서 (1)은 **구조 (Structure)** 다.

두 번째 (2)는 "데이터 처리 작업 명세", "데이터 조작 도구"래. 데이터를 실제로 넣고 빼고 바꾸고 찾는 거, 즉 CRUD(Create, Read, Update, Delete) 같은 거 어떻게 할 건지 정의하는 거 아니냐? 데이터를 가지고 하는 **연산**이지. 그러니까 (2)는 **연산 (Operation)** 이다.

그래서 답은 순서대로 **구조**, **연산** 이거다.

**주요 포인트:**
*   데이터 모델의 3가지 구성 요소:
    *   **구조 (Structure):** 데이터베이스에 저장될 데이터의 유형, 구조 및 제약 조건, 데이터 간의 관계를 명세. (어떤 데이터가 어떤 형태로 저장되는가?)
    *   **연산 (Operation):** 데이터베이스의 데이터를 처리하고 조작하는 작업들(검색, 삽입, 삭제, 갱신 등)의 명세. (데이터로 무엇을 할 수 있는가?)
    *   **제약 조건 (Constraint):** 데이터베이스에 저장될 수 있는 데이터의 유효성에 대한 논리적인 제한 사항. (어떤 데이터가 유효한가?)

---

### 문제 17

객체에 접근하고자 하는 주체(또는 주체가 속한 그룹)의 접근 권한에 따라 접근을 통제하는 접근 통제 정책을 무엇이라 하는지 영문 약어로 작성하시오

(사용자 피드백 반영 후 수정된 답변)
어? 답지가 DAC라고? 잠만... 내가 너무 RBAC에 꽂혔나? ㅋㅋㅋ 다시 함 보자.

"객체에 접근하고자 하는 주체(또는 주체가 속한 그룹)의 접근 권한에 따라 접근을 통제하는 접근 통제 정책"

아, 내가 너무 '그룹'에 꽂혀서 RBAC으로 생각했네. 미안하다 ㅋㅋ

DAC는 **임의 접근 통제 (Discretionary Access Control)**인데, 이게 뭐냐면 객체(파일 같은 거)의 **소유자**가 자기 마음대로 접근 권한을 주는 방식이야. "이 사용자는 읽기만", "저 그룹은 읽기/쓰기 다 됨" 이런 식으로 소유자가 직접 권한을 설정하는 거지. 리눅스 파일 권한 같은 거 생각하면 쉬워. 소유자가 사용자나 그룹별로 권한을 줄 수 있잖아.

문제에서 "주체(또는 주체가 속한 그룹)의 접근 권한에 따라 통제"라고 했는데, 이게 소유자가 설정한 그 권한 목록(ACL 같은 거)에 따라 접근을 허용/거부하는 걸 설명하는 거라고 볼 수 있겠네. '역할'보다는 '누구에게 권한을 줬느냐'에 초점을 맞춘 설명이라고 봐야겠다.

RBAC는 역할(Role)이라는 중간 관리 개념이 핵심인데, 문제 설명이 그것보다는 좀 더 직접적으로 주체나 그룹에 대한 권한 자체를 말하는 뉘앙스가 있긴 하네.

오케이, 니 말이 맞다. 답은 **DAC**가 더 적절해 보인다. 내가 좀 헷갈렸네 ㅋㅋ 쏘리!

**주요 포인트:**
*   **DAC (Discretionary Access Control):** 객체에 대한 접근 권한을 객체의 소유자(Owner)가 임의로 지정하고 제어하는 방식.
*   사용자나 그룹의 식별자(Identity)를 기반으로 접근 권한을 부여한다.
*   주요 특징은 소유자의 '재량(Discretion)'에 따라 권한이 결정된다는 점이다.

---

### 문제 18

다음 Java 프로그램의 실행 결과를 작성하시오

```java
public class Main {
    public static void main(String[] args) throws Exception {
        int sum, cnt;
        for(cnt = 0, sum = 0; cnt <= 5; cnt++){
            sum += cnt;
            System.out.print(cnt)
            if(cnt == 5){
                System.out.print("=");
                System.out.print(sum);
            }
            else{
                System.out.print("+");
            }
        }
    }
}
```

야 ㅋㅋ 또 자바 코드냐? 이번엔 또 뭘 찍어내는지 함 보자고.

`int sum, cnt;` : 정수 변수 `sum`이랑 `cnt` 만들었네. 아직 값은 없고.

`for(cnt = 0, sum = 0; cnt <= 5; cnt++)` : 이거 `for` 루프 돌리는 건데, 시작할 때 `cnt`는 0, `sum`도 0으로 세팅하고, `cnt`가 5보다 작거나 같을 때까지 계속 돌리고, 한 번 돌 때마다 `cnt`를 1씩 늘리는 거네.

루프 안을 보자.
`sum += cnt;` : `sum`에다가 현재 `cnt` 값을 더하라는 거네. `sum = sum + cnt`랑 똑같은 거지.
`System.out.print(cnt)` : 현재 `cnt` 값을 화면에 찍으래. `println` 아니니까 줄바꿈은 안 하고 옆으로 쭉 이어서 찍겠네.
`if(cnt == 5)` : 만약 `cnt`가 5랑 같으면?
`System.out.print("=");` : "=" 찍고
`System.out.print(sum);` : 마지막 `sum` 값 찍고.
`else` : `cnt`가 5가 아니면?
`System.out.print("+");` : "+" 찍으라는 거네.

자 그럼 루프 도는 거 따라가 보자.

1.  `cnt=0`, `sum=0`: `sum = 0+0 = 0`. 화면에 **0** 찍고, 5 아니니까 **+** 찍고. (현재 출력: `0+`)
2.  `cnt=1`, `sum=0`: `sum = 0+1 = 1`. 화면에 **1** 찍고, 5 아니니까 **+** 찍고. (현재 출력: `0+1+`)
3.  `cnt=2`, `sum=1`: `sum = 1+2 = 3`. 화면에 **2** 찍고, 5 아니니까 **+** 찍고. (현재 출력: `0+1+2+`)
4.  `cnt=3`, `sum=3`: `sum = 3+3 = 6`. 화면에 **3** 찍고, 5 아니니까 **+** 찍고. (현재 출력: `0+1+2+3+`)
5.  `cnt=4`, `sum=6`: `sum = 6+4 = 10`. 화면에 **4** 찍고, 5 아니니까 **+** 찍고. (현재 출력: `0+1+2+3+4+`)
6.  `cnt=5`, `sum=10`: `sum = 10+5 = 15`. 화면에 **5** 찍고, 어? 5 맞네? 그럼 **=** 찍고, `sum` 값인 **15** 찍고. (현재 출력: `0+1+2+3+4+5=15`)

이제 `cnt`가 6이 되면 `cnt <= 5` 조건이 틀려서 루프 끝나겠지?

그럼 최종 결과는 **0+1+2+3+4+5=15** 이거네. ㅋㅋㅋ 0부터 5까지 더하는 과정을 그대로 보여주는 거였구만.

**주요 포인트:**
*   `for` 루프의 초기화, 조건, 증감식 동작 방식 이해.
*   `sum += cnt`는 `sum = sum + cnt`와 동일한 누적 합계 연산.
*   `System.out.print()`는 줄바꿈 없이 출력한다.
*   `if-else` 문을 사용하여 루프의 마지막 반복에서 다른 출력을 하도록 제어한다.
*   최종적으로 0부터 5까지의 합을 구하는 과정을 출력하는 코드이다.

---

### 문제 19

다음은 모듈화 중 결합도와 관련된 설명이다. 빈칸에 들어갈 결합도 수준을 <보기>에서 골라 작성하시오

```
- (1) 결합도는 다른 모듈 내부에 있는 변수나 기능을 다른 모듈에서 사용하는 경우이다.
- (2) 결합도는 모듈 간의 인터페이스로 배열이나 오브젝트, 스트럭처 등이 전달되는 경우이다.
- (3) 결합도는 파라미터가 아닌 모듈 밖에 선언되어 있는 전역 변수를 참조하고 전역 변수를 갱신하는 식으로 상호작용하는 경우이다.
```
```
<보기>
자료, 스탬프, 제어, 외부, 공통, 내용
```

야 ㅋㅋ 이거 모듈 결합도 종류 맞추는 거네. 결합도는 모듈끼리 얼마나 끈끈하게 엮여있냐는 건데, 낮을수록 좋은 거 알지? <보기>에서 골라보자.

(1) 봐봐. "다른 모듈 내부"에 있는 걸 막 갖다 쓴대. 남의 집 안방까지 들어가서 물건 쓰는 격 아니냐? ㅋㅋ 이건 완전 개판으로 엮인 거지. 모듈 하나 고치면 다른 거 다 터질 수 있는 최악의 상황. 이걸 **내용(Content) 결합도**라고 한다. 제일 안 좋은 놈이야.

(2)는 모듈끼리 인터페이스로 "배열, 오브젝트, 스트럭처" 같은 덩어리를 통째로 주고받는대. 필요한 건 그 안에 딱 하나인데, 그냥 뭉탱이로 던져주는 거지. 예를 들어 학생 정보 중에 이름만 필요한데, 학생 객체 전체를 넘겨주는 식. 이런 걸 **스탬프(Stamp) 결합도**라고 한다. 데이터 덩어리를 도장(스탬프) 찍듯이 넘긴다고 생각하면 돼.

(3)은 파라미터로 주고받는 게 아니라 "모듈 밖에 있는 전역 변수"를 같이 쓴대. 여기저기서 다 같이 쓰는 공용 공간(전역 변수)을 통해 데이터를 주고받는 거. 누가 그 전역 변수 건드렸는지 추적하기 힘들어지고 사이드 이펙트 생기기 딱 좋지. 이렇게 **공통**된 전역 변수를 쓰는 걸 **공통(Common) 결합도**라고 한다.

그래서 답은 순서대로 **내용**, **스탬프**, **공통** 이거다.

**주요 포인트:**
*   **결합도 (Coupling):** 모듈 간의 상호 의존성 정도. 낮을수록 좋다 (느슨한 결합).
*   **내용 결합도 (Content Coupling):** 한 모듈이 다른 모듈의 내부 기능 및 데이터에 직접 접근/수정. (가장 높고 안 좋은 결합도)
*   **스탬프 결합도 (Stamp Coupling):** 모듈 간 인터페이스로 자료 구조(배열, 객체 등) 전체가 전달됨.
*   **공통 결합도 (Common Coupling):** 여러 모듈이 하나의 공통된 전역 데이터를 공유하고 수정.

---

### 문제 20

시스템에 접근할 적법한 사용자 아이디와 패스워드를 모를 경우 공격 대상이 이미 시스템에 접속되어 세션이 연결되어 있는 상태를 가로채는 공격을 칭하는 용어를 작성하시오

야 ㅋㅋ 이거 딱 보니까 로그인 이미 돼 있는 놈 옆에서 슬쩍 끼어들어서 그놈 행세하는 거 뭐냐고 묻는 거네. 아이디 비번 몰라도, 이미 연결된 상태(세션)를 중간에서 낚아채서 지가 그 사용자인 척 하는 거 아니냐? ㅋㅋㅋ

이런 걸 **세션 하이재킹 (Session Hijacking)** 이라고 한다. 비행기 납치하는 것처럼 남의 세션을 납치하는 거지. 나쁜 놈들이 많이 쓰는 수법이지 ㅋㅋ

**주요 포인트:**
*   세션 하이재킹은 인증된 사용자의 활성화된 세션을 가로채는 공격이다.
*   공격자는 이를 통해 아이디/패스워드 없이 합법적인 사용자로 위장할 수 있다.
*   세션 ID를 훔치거나 예측하여 수행되는 경우가 많다.