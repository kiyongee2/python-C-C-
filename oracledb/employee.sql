
show user;

-- 테이블 생성 및 데이터 삽입, 검색
CREATE TABLE employee(
    name VARCHAR2(10),   
    hire_date VARCHAR2(20), 
    salary  NUMBER              
); 

-- 데이터 삽입(추가)
INSERT INTO employee(name, hire_date, salary) 
VALUES ('신유빈', '2024-11-20', 3000000);
INSERT INTO employee(name, hire_date) VALUES ('이정후', '2025-5-30');
INSERT INTO employee(name, hire_date) VALUES ('테스트', '2025-5-30');

-- 데이터 수정 (이정후의 급여를 2000000원으로 변경함)
UPDATE employee SET salary = 2000000
WHERE name = '이정후';

-- 데이터 삭제 (테스트 레코드 삭제)
DELETE FROM employee WHERE name = '테스트';

-- 데이터 검색
SELECT * FROM employee;

-- 커밋 수행
COMMIT;

-- 테이블 삭제
DROP TABLE employee;