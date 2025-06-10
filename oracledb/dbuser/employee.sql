
-- 테이블 생성 
CREATE TABLE employee(
    id CHAR(4) PRIMARY KEY,     -- 사원 아이디(기본키)
    name VARCHAR2(10) NOT NULL, -- 이름(필수 입력)
    salary  NUMBER              -- 급여         
); 
 
-- 테이블 삭제
DROP TABLE employee;

-- 데이터 삽입(추가)
INSERT INTO employee(id, name, salary) VALUES ('e101', '신유빈', 3000000);
INSERT INTO employee(id, name, salary) VALUES ('e102', '이정후', 2000000);
INSERT INTO employee(id, name) VALUES ('e103', '임시현');
-- 무결성 제약 조건 위배(기본키 중복)
INSERT INTO employee(id, name) VALUES ('e103', '허미미');
-- 무결성 제약 조건 위배(NULL 불가)
INSERT INTO employee(id, salary) VALUES ('e104', 4000000);

-- GENDER 추가
ALTER TABLE employee ADD gender VARCHAR2(10);

INSERT INTO employee(id, name, salary, gender) VALUES ('e101', '김도영', 3000000, '남자');
INSERT INTO employee(id, name, salary, gender) VALUES ('e102', '임서현', 2000000, '여자');
INSERT INTO employee(id, name, salary, gender) VALUES ('e103', '신유빈', 4000000, '여자');

COMMIT;

SELECT * FROM employee;

