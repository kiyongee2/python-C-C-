
-- users (회원)
CREATE TABLE users(
   userid   VARCHAR2(20) PRIMARY KEY,
   username  VARCHAR2(30) NOT NULL,
   userpassword  VARCHAR2(20) NOT NULL,
   userage  NUMBER(3) NOT NULL,  
   useremail  VARCHAR2(50) NOT NULL
);

SELECT * FROM users;