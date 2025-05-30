-- book 테이블 생성
CREATE TABLE book(
    bookid     NUMBER PRIMARY KEY,
    bookname   VARCHAR2(40) NOT NULL,
    publisher  VARCHAR2(40) NOT NULL,
    price      NUMBER NOT NULL
);

INSERT INTO book VALUES (1, '축구의 역사', '굿스포츠', 7000);
INSERT INTO book VALUES (2, '축구아는 여자', '나무수', 13000);
INSERT INTO book VALUES (3, '축구의 이해', '대한미디어', 22000);
INSERT INTO book VALUES (4, '골프 바이블', '대한미디어', 35000);
INSERT INTO book VALUES (5, '피겨 교본', '굿스포츠', 8000);
INSERT INTO book VALUES (6, '양궁의 실제', '굿스포츠', 6000);
INSERT INTO book VALUES (7, '야구의 추억', '이상미디어', 20000);
INSERT INTO book VALUES (8, '야구를 부탁해', '이상미디어', 13000);
INSERT INTO book VALUES (9, '올림픽 이야기', '삼성당', 7500);
INSERT INTO book VALUES (10, 'Olympic Champions', 'Pearson', 13000);

COMMIT;

SELECT * FROM book;

SELECT bookname, price FROM book;

SELECT DISTINCT publisher FROM book;

SELECT * FROM book WHERE price < 20000;

SELECT * FROM book 
WHERE price BETWEEN 10000 AND 20000;

SELECT * FROM book 
WHERE publisher IN ('굿스포츠', '대한미디어');

SELECT * FROM book 
WHERE publisher = '굿스포츠' OR publisher = '대한미디어';

SELECT * FROM book 
WHERE publisher NOT IN ('굿스포츠', '대한미디어');

SELECT * FROM book 
WHERE bookname LIKE '축구의 역사';

SELECT bookname, publisher FROM book 
WHERE bookname LIKE '%축구%';

-- 정렬
SELECT * FROM book 
ORDER BY bookname;

SELECT * FROM book 
ORDER BY price DESC, publisher ASC;


-- 집계 함수
-- 도서의 개수
SELECT COUNT(*) AS 총개수
FROM book;

-- 도서의 가격평균
SELECT AVG(price) AS 평균가격
FROM book;

-- 도서의 최고가, 최저가 검색
SELECT MAX(price) AS 최고가격, MIN(price) AS 최저가격 
FROM book;










