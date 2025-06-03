-- 주문 테이블 생성
CREATE TABLE orders(
    orderid     NUMBER PRIMARY KEY,
    custid      NUMBER NOT NULL,
    bookid      NUMBER NOT NULL,
    saleprice   NUMBER NOT NULL,
    orderdate   VARCHAR2(20) NOT NULL,
    FOREIGN KEY(custid) REFERENCES customer(custid),  --외래키(custid)
    FOREIGN KEY(bookid) REFERENCES book(bookid)       --외래키(bookid)
);

-- orders 자료 삽입
INSERT INTO orders VALUES (1, 1, 1, 6000, '2018-07-01');
INSERT INTO orders VALUES (2, 1, 3, 21000, '2018-07-03');
INSERT INTO orders VALUES (3, 2, 5, 8000, '2018-07-03');
INSERT INTO orders VALUES (4, 3, 6, 6000, '2018-07-04');
INSERT INTO orders VALUES (5, 4, 7, 20000, '2018-07-05');
INSERT INTO orders VALUES (6, 1, 2, 12000, '2018-07-07');
INSERT INTO orders VALUES (7, 4, 8, 13000, '2018-07-07');
INSERT INTO orders VALUES (8, 3, 10, 12000, '2018-07-08');
INSERT INTO orders VALUES (9, 2, 10, 7000, '2018-07-09');
INSERT INTO orders VALUES (10, 3, 8, 13000, '2018-07-10');

SELECT SUM(saleprice) AS 총매출 FROM orders;

SELECT SUM(saleprice) AS 총매출 FROM orders
WHERE custid = 2;

-- 고객별 주문 도서의 총수량과 판매액
SELECT custid, COUNT(*) 도서수량, round(AVG(saleprice)) 평균금액
FROM orders GROUP BY custid;

-- 가격이 8000원 이상인 도서 구매 고객에 대하여 고객별 도서의 총수량
-- 2권 이상 구매한 고객
SELECT custid, COUNT(*) 도서수량
FROM orders 
WHERE saleprice >= 8000
GROUP BY custid 
HAVING COUNT(*) >= 2

















