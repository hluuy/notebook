-- 13. 다음의 [T1] 테이블과 [T2] 테이블에 대해 <SQL문>을 수행했을 때의 결과를 작성하시오.

[T1]
| NO | Name |
| 50123 | SMITH |
| 40543 | ALLEN |
| 30456 | SCOTT |

[T2]
| RULE |
| S% |
| %T% |

<SQL문>
SELECT COUNT(*) AS COUNT
FROM T1 CROSS JOIN T2
WHERE T!.Name LIKE T2.RULE;