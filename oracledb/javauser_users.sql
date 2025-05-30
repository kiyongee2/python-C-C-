
-- users (회원) 테이블 생성
CREATE TABLE users(
   userid   VARCHAR2(10) PRIMARY KEY,    -- 아이디
   userpassword  VARCHAR2(100) NOT NULL, -- 비밀번호
   username  VARCHAR2(20) NOT NULL,      -- 이름
   userage  NUMBER(3)                    -- 나이
);

-- 회원 추가
INSERT INTO users(userid, userpassword, username, userage) 
VALUES ('today', 't1234$#', '이정후', 26);

INSERT INTO users(userid, userpassword, username) 
VALUES ('hangang', 'h1234$#', '한강');

-- 전체 회원 검색
SELECT * FROM users;

-- 특정 회원 검색
SELECT * FROM users WHERE userid = 'today';

DELETE FROM users;

DELETE FROM users WHERE userid = 'hangang';

COMMIT;

DROP TABLE users;