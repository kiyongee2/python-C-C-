
show user;

-- employee 테이블 생성
CREATE TABLE employee(
    name    VARCHAR2(10),      -- 이름
    hire_date VARCHAR2(20), -- 입사일자
    salary  NUMBER           -- 급여
); 

-- 데이터 삽입(추가)
INSERT INTO employee(name, hire_date, salary) 
VALUES ('신유빈', '2024-11-20', 2000000);
INSERT INTO employee(name, hire_date) VALUES ('이정후', '2025-5-30');

-- 데이터 검색
SELECT * FROM employee;

-- 커밋 수행
COMMIT;

-- 테이블 삭제
DROP TABLE employee;