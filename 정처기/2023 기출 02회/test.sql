-- 4. 다음의 입력 필드와 값을 보고 [STUDENT] 테이블에 데이터를 삽입하기 위한 INSERT문을 작성하시오.

|학번(int)|이름(char(10))|학년(int)|전공(char(20))|전화번호(char(13))|
|123456|이영진|4|컴퓨터|010-1234-5678|

-- 17. 다음을 보고 빈칸을 작성하여 쿼리를 완성하시오.
-- 학과 테이블에서 전화번호 속성을 삭제한다. 이때 참고하고 있는 테이블이 있다면 연쇄 삭제되도록 설정한다.
<쿼리>
ALTER TABLE 학과
DROP COLUMN 전화번호 (빈칸);