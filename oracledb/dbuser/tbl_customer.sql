-- 고객 테이블 생성
CREATE TABLE customer(
    custid      NUMBER PRIMARY KEY,
    name        VARCHAR2(40) NOT NULL,
    address     VARCHAR2(50),
    phone       VARCHAR2(20)
);

-- customer 자료 삽입
INSERT INTO customer VALUES (1, '박지성', '영국 맨체스타', '000-5000-0001');
INSERT INTO customer VALUES (2, '김연아', '대한민국 서울', '000-6000-0001');
INSERT INTO customer VALUES (3, '안산', '대한민국 광주광역시', '000-7000-0001');
INSERT INTO customer VALUES (4, '류현진', '미국 토론토', NULL);
INSERT INTO customer VALUES (5, '손흥민', '영국 토트넘', '000-8000-0001');

SELECT * FROM customer;

-- 전화가 없는 고객의 정보 
SELECT * FROM customer WHERE phone IS NULL;

-- 전화가 있는 고객의 정보
SELECT * FROM customer WHERE phone IS NOT NULL;

