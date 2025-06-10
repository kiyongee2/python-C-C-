-- 내장 함수
SELECT abs(-10) FROM dual;

-- 반올림
SELECT ROUND(3.875, 1) FROM dual;
SELECT ROUND(3.875, 0) FROM dual;

SELECT custid AS 고객번호,
       ROUND(AVG(saleprice), -2) AS 평균금액
FROM orders
GROUP BY custid;

SELECT salary,
       salary/30 일급,
       ROUND(salary/30, 1) 결과1,
       ROUND(salary/30, 0) 결과2
FROM employee;

-- 버림
SELECT TRUNC(3.875, 1) FROM dual;

SELECT FLOOR(3.875) FROM dual;


SELECT SUBSTR('ABCD', 1, 2) RESULT FROM DUAL;

SELECT REPLACE('ABC', 'A', 'E') RESULT FROM DUAL;

SELECT '안녕' || '1004' RESULT FROM DUAL;

-- 현재 날짜
SELECT SYSDATE FROM DUAL;

-- 현재 날짜와 시간
SELECT SYSTIMESTAMP FROM DUAL;

SELECT ADD_MONTHS(SYSDATE, 3) 결과 FROM DUAL;

SELECT ADD_MONTHS('2025/04/01', -3) 결과 FROM DUAL;

SELECT TO_DATE('2025/06/07') + 10 결과 FROM DUAL;

SELECT orderid 주문번호,
       orderdate 주문일,
       TO_DATE(orderdate) + 10 확정일
FROM orders;


-- 날짜 형식 변환
SELECT TO_CHAR(SYSDATE, 'YY') 년도,
       TO_CHAR(SYSDATE, 'MM') 월,
       TO_CHAR(SYSDATE, 'YY-MM-DD') 날짜
FROM DUAL;

SELECT name,
       DECODE(gender, '남자', 'M', 'F') gender,
       salary
FROM employee;


SELECT name,
       CASE 
          WHEN gender = '남자' THEN 'M'
          ELSE 'F'
       END gender,
       salary
FROM employee;

SELECT name,
       salary,
       CASE 
          WHEN salary >= 3000000 THEN '과장'
          WHEN salary >= 2000000 THEN '대리'
          ELSE '사원'
       END 급여기준
FROM employee;





