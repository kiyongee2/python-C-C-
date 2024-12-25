SHOW USER;

SELECT * FROM TAB;

CREATE TABLE ex1(
    column1 CHAR(10),
    column2 VARCHAR(10)
);

INSERT INTO ex1(column1, column2) VALUES ('abc', 'abc');
INSERT INTO ex1(column1, column2) VALUES ('당산', '당산');

SELECT column1, LENGTH(column1), column2, LENGTH(column2) FROM ex1;

COMMIT;

DROP TABLE ex1;