
CREATE TABLE ex2(
    col_date DATE,  --날짜
    col_timestamp TIMESTAMP  --날짜와 시간
);

-- 현재 날짜
INSERT INTO ex2(col_date, col_timestamp) VALUES (SYSDATE, SYSTIMESTAMP);

SELECT col_date, col_timestamp FROM ex2;

INSERT INTO ex2(col_date, col_timestamp) 
VALUES (TO_DATE('25/05/26', 'YYYY-MM-DD'), 
        TO_TIMESTAMP('25/05/26 08:36:04.136000000', 'YYYY-MM-DD HH24:MI:SS.FF'));

DROP TABLE ex2;