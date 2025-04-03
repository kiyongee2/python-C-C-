
-- users (회원)
CREATE TABLE users(
   userid   VARCHAR2(20) PRIMARY KEY,
   username  VARCHAR2(30) NOT NULL,
   userpassword  VARCHAR2(20) NOT NULL,
   userage  NUMBER(3) NOT NULL,  
   useremail  VARCHAR2(50) NOT NULL
);

-- 회원 추가
INSERT INTO users
VALUES ('luna', '신유빈', '12345', 20, 'luna@korea.kr');

COMMIT;

SELECT * FROM users;

-- 1명 검색
SELECT * FROM users WHERE userid = 'elsa';
