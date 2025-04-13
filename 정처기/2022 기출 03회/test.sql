-- 7. 다음 <테이블 생성 및 튜플 추가>로 테이블을 생성하였다. 생성된 테이블에 대하여 <SQL문> (1), (2)의 실행 결과를 작성하시오. (컬럼명은 제외한 결과만 작성하시오)
CREATE TABLE 부서
(
    부서코드 INT,
    부서명 VARCHAR(10),
    PRIMARY KEY (부서코드)
    );

CREATE TABLE 직원
(
    직원번호 INT,
    직원이름 VARCHAR(10),
    부서코드 INT,
    PRIMARY KEY (직원번호),
    FOREIGN KEY (부서코드) REFERENCES 부서(부서코드) ON DELETE CASCADE
    );

INSERT INTO 부서 (부서코드, 부서명) VALUES (1, '기획부');
INSERT INTO 부서 (부서코드, 부서명) VALUES (2, '인사부');
INSERT INTO 부서 (부서코드, 부서명) VALUES (3, '홍보부');

INSERT INTO 직원 (직원번호, 직원이름, 부서코드) VALUES (1001, '이영진', 1);
INSERT INTO 직원 (직원번호, 직원이름, 부서코드) VALUES (1002, '김영진', 2);
INSERT INTO 직원 (직원번호, 직원이름, 부서코드) VALUES (1003, '성영진', 3);
INSERT INTO 직원 (직원번호, 직원이름, 부서코드) VALUES (1004, '최영진', 2);
INSERT INTO 직원 (직원번호, 직원이름, 부서코드) VALUES (1005, '구영진', 2);
INSERT INTO 직원 (직원번호, 직원이름, 부서코드) VALUES (1006, '우영진', 1);
INSERT INTO 직원 (직원번호, 직원이름, 부서코드) VALUES (1007, '황영진', 3);

(1) SELECT DISTINCT COUNT(직원번호) FROM 직원 WHERE 부서코드 = 2;
(2) DELETE FROM 부서 WHERE 부서코드 = 2; SELECT DISTINCT COUNT(직원번호) FROM 직원;

-- 12. [학생] 테이블에서 컴퓨터공학과 학생 50명, 건축학과 학생 100명, 화학과 학생 50명의 튜플이 있는 경우 (1), (2), (3)에 해당하는 SQL 쿼리 실행 결과의 튜플수를 각각 작성하시오. (단, 학과 속성명은 'DEPT'이다.)

(1) SELECT DEPT FROM 학생;
(2) SELECT DISTINCT DEPT FROM 학생;
(3) SELECT COUNT(DISTINCT DEPT) FROM 학생 WHERE DEPT = '건축학과';