-- 게시판 테이블 생성
CREATE TABLE board(
    bno NUMBER PRIMARY KEY,         -- 글번호
    btitle VARCHAR2(100) NOT NULL,  -- 글제목
    bcontent CLOB NOT NULL,         -- 글내용
    bwriter VARCHAR2(20) NOT NULL,  -- 글쓴이
    bdate  DATE DEFAULT SYSDATE     -- 작성일
);

CREATE SEQUENCE seq_bno;  -- 시퀀스(일련번호)

-- 게시글 삽입(bdate는 자동이므로 칼럼에서 생략)
INSERT INTO board(bno, btitle, bcontent, bwriter)
VALUES (seq_bno.NEXTVAL, '스마트폰 - Galaxy', '삼성 갤럭시 S24입니다.', '김기용');

INSERT INTO board(bno, btitle, bcontent, bwriter)
VALUES (seq_bno.NEXTVAL, '스마트폰 - Iphone 16입니다.', '애플 아이폰 입니다.', 'Elsa');

-- 게시글 검색
SELECT * FROM board;

-- 1건 검색
SELECT * FROM board WHERE btitle LIKE '%Gal%';




