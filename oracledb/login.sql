-- 제약 조건 TEST
CREATE TABLE login(
    id  VARCHAR2(10) PRIMARY KEY,
    password VARCHAR2(20) NOT NULL
);

INSERT INTO login VALUES('cloud100', 'sky123$$@@');
-- 무결성 제약조건 위배(기본키 중복 불가)
--INSERT INTO login VALUES('cloud100', 'sun123$$@@'); 
-- 값의 수가 부족함(NULL 불가)
--INSERT INTO login VALUES('cloud100'); 

SELECT * FROM login;

-- 칼럼 추가 - (칼럼명 자료형)
ALTER TABLE login ADD name VARCHAR2(10);

INSERT INTO login VALUES('cloud200', 'sky123$$@@', '고담덕');

-- "ID" 열에 대한 값이 너무 큼(실제: 12, 최대값: 10) 오류 
--INSERT INTO login VALUES('mountain1004', 'sky123$$@@', '고담덕');

-- 칼럼 타입 변경 - (id를 20자로 확장)
ALTER TABLE login MODIFY id VARCHAR2(20);

INSERT INTO login VALUES('mountain1004', 'sun123$$@@', '장영실');



-- 레코드(행) 삭제
DELETE FROM login WHERE id = 'mountain1004';

DROP TABLE login;