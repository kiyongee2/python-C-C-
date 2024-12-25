
CREATE TABLE ex2(
    col_date DATE
);

-- 현재 날짜
INSERT INTO ex2 VALUES (SYSDATE);

SELECT col_date FROM ex2;