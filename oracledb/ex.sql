-- 계정 보기
SHOW USER;

-- 테이블 보기
SELECT * FROM TAB;

-- 테이블 생성
CREATE TABLE ex1(
    column1 CHAR(10),
    column2 VARCHAR(10)
);

-- 데이터 추가
INSERT INTO ex1(column1, column2) VALUES ('abc', 'abc');
INSERT INTO ex1(column1, column2) VALUES ('당산', '당산');

-- 데이터 검색
SELECT column1, LENGTH(column1), column2, LENGTH(column2) FROM ex1;

-- 트랜잭션 - 커밋
COMMIT;

-- 테이블 삭제
DROP TABLE ex1;