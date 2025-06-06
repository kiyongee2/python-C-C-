
show user;

-- 테이블 생성 
CREATE TABLE employee(
    id CHAR(4),        -- 사원 아이디
    name VARCHAR2(10), -- 이름
    salary  NUMBER     -- 급여         
); 

-- 데이터 삽입(추가)
INSERT INTO employee(id, name, salary) VALUES ('e101', '신유빈', 3000000);
INSERT INTO employee(id, name, salary) VALUES ('e102', '이정후', 2000000);
INSERT INTO employee(id, name) VALUES ('e103', '임시현');

-- 사원의 모든 정보 검색
SELECT * FROM employee;

-- 사원의 아이디와 이름 검색
SELECT id, name FROM employee;

-- 아이디가 'e101'인 사원 검색
SELECT * FROM employee WHERE id = 'e101';

-- 이름이 '신유빈'인 사원 정보 검색
SELECT * FROM employee WHERE name LIKE '신유빈';

-- 이정후의 급여를 5000000원으로 변경
UPDATE employee SET salary = 5000000
WHERE name = '이정후';

-- id가 'e103'인 사원의 이름을 '안산', 급여를 3500000원으로 수정
UPDATE employee SET name = '안산', salary = 3500000
WHERE id = 'e103';

-- id가 'e103'인 사원 삭제
DELETE FROM employee WHERE id = 'e103';

-- 데이터 검색
SELECT * FROM employee;

-- 커밋 수행
COMMIT;

-- 테이블 삭제
DROP TABLE employee;