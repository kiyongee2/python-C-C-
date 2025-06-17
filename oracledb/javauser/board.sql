-- 게시판 테이블 작성
CREATE TABLE board(
    bno       NUMBER PRIMARY KEY,     -- 글번호
    btitle    VARCHAR2(100) NOT NULL, -- 글제목
    bcontent  CLOB NOT NULL,          -- 글내용
    bwriter   VARCHAR2(50),           -- 글쓴이
    bdate     DATE DEFAULT SYSDATE    -- 작성일
);

-- 시퀀스(일련번호) 생성
CREATE SEQUENCE seq_bno;

-- 게시글 등록(작성일은 자동 생성됨으로 생략함)
INSERT INTO board(bno, btitle, bcontent, bwriter)
VALUES (seq_bno.NEXTVAL, '삼성 스마트폰', '삼성 갤럭시 24입니다.', '이재용');
INSERT INTO board(bno, btitle, bcontent, bwriter)
VALUES (seq_bno.NEXTVAL, '애플 스마트폰', 'Apple 아이폰입니다.', '스티브잡스');
INSERT INTO board(bno, btitle, bcontent, bwriter)
VALUES (seq_bno.NEXTVAL, '엘지 노트북', 'LG gram 노트북입니다.', '임시현');

-- 최근 게시글 순으로 정렬
SELECT * FROM board ORDER BY bdate DESC;

-- 글 제목에 '스마트폰'을 포함한 게시글 출력
SELECT * FROM board WHERE btitle LIKE '%스마트폰%';

-- 글 제목에 '스마트폰'을 포함하고 글쓴이가 '이재용'인 게시글 검색
SELECT * FROM board 
WHERE btitle LIKE '%스마트폰%' AND bwriter LIKE '이재용';

-- 모든 게시글 삭제
DELETE FROM board;

DROP TABLE boards;
DROP SEQUENCE seq_bno;