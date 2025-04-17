-- 6. 다음 [직원] 테이블에서 <SQL 쿼리>를 실행했을 때의 결과를 작성하시오

[직원]
| EMP_NO | EMP_NAME | EMP_EDPT | EMP_SAL |
| 100 | 김성모 | 총무 | 2500 |
| 200 | 이재후 | 총무 | 3100 |
| 300 | 이준형 | 인사 | 2900 |
| 400 | 성우람 | 인사 | 2700 |
| 500 | 홍찬중 | 기획 | 2800 |

<SQL 쿼리>
SELECT COUNT(*) FROM 직원
WHERE EMP_NO > 100 AND EMP_SAL >= 3000 OR EMP_NO = 200;