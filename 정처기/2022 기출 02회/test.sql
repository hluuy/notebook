-- 3. 다음 [상품] 테이블을 대상으로 하는 <SQL문>은 '제조사'가 'H'인 상품의 '단가'보다 큰 제품을 검색하는 쿼리이다. 빈칸에 들어갈 알맞은 명령을 작성하시오

[상품]
| 제품명 | 단가 | 제조사 |
| 라면 | 1500 | A |
| 커피 | 2300 | H |
| 사탕 | 1000 | A |
| 과자 | 3000 | C |
| 커피 | 2500 | C |
| 라면 | 1800 | H |

<SQL문>
SELECT 제품명, 단가, 제조사
FROM 상품
WHERE 단가 > ( ) (SELECT 단가 FROM 제품 WHERE 제조사 = 'H');

-- 4. 다음의 [Test] 테이블에 대하여 <SQL문>을 수행했을 때의 결과를 작성하시오

[Test]
| col1 | col2 | col3 |
| 1 | 2 | null |
| 2 | 3 | 6 |
| 3 | 5 | 5 |
| 4 | 6 | 3 |
| 5 | null | 3 |

<SQL문>
SELECT COUNT(col3)
FROM Test
WHERE col2 IN(2,3) OR col3 IN(3,5)

-- 12. 다음의 [직원] 테이블에서 <관계대수>를 수행하였을 때의 결과 (1), (2), (3), (4), (5)를 작성하시오

[직원]
| 사번 | 이름 | 직급 | 부서 |
| 101 | 김수일 | 과장 | 경리부 |
| 103 | 오지영 | 대리 | 총무부 |
| 106 | 이지영 | 부장 | 기획부 |
| 108 | 홍기훈 | 사원 | 인사부 |

<관계대수>
Π<sub>직급</sub>(직원)

<실행 결과>
(1) :
(2) :
(3) :
(4) :
(5) :