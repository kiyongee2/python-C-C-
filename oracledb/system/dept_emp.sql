
-- 부서 테이블
CREATE TABLE department(
    deptid  NUMBER,
    deptname    VARCHAR2(20) NOT NULL,
    location    VARCHAR2(20) NOT NULL,
    PRIMARY KEY(deptid) -- 기본키
);

-- 사원 테이블
CREATE TABLE employee(
    empid   NUMBER PRIMARY KEY, -- 기본키
    empname VARCHAR2(20) NOT NULL,
    age     NUMBER,
    deptid  NUMBER,
    -- 외래키
    FOREIGN KEY(deptid) REFERENCES department(deptid)
);

-- 부서 자료 추가
INSERT INTO department VALUES (10, '전산팀', '서울');
INSERT INTO department VALUES (20, '총무팀', '인천');

-- 사원 자료 추가
INSERT INTO employee VALUES (101, '이강', 27, 10);
INSERT INTO employee VALUES (102, '김산', 28, 20);

-- 무결성 제약조건 위배 - 부모키 없음
--INSERT INTO employee VALUES (103, '정들', 35, 30); 

-- 부서 자료 삭제 안됨(사원 테이블에서 참조하고 있음)
-- 해결: 사원을 삭제하고 부서 삭제
--DELETE FROM department WHERE deptid = 20;

-- 부서 검색
SELECT * FROM department;

SELECT * FROM employee;

DROP TABLE employee;

COMMIT;






