
-- boards 테이블 생성
CREATE TABLE boards(
    bno      NUMBER PRIMARY KEY,
    btitle   VARCHAR2(100) NOT NULL,
    bcontent CLOB NOT NULL,
    bwriter  VARCHAR2(50) NOT NULL,
    bdate    DATE DEFAULT SYSDATE
);

CREATE SEQUENCE seq_bno; -- 시퀀스(일련번호) 생성

-- bdate는 자동으로 시스템 날짜로 저장됨
INSERT INTO boards(bno, btitle, bcontent, bwriter) 
VALUES (seq_bno.NEXTVAL, 'smartphone', '삼성 갤럭시 s21입니다.', 'today');

SELECT * FROM boards;