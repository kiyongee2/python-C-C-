
-- BankAccount 테이블 생성
CREATE TABLE bank_account(
    ano     VARCHAR2(10) PRIMARY KEY,
    owner   VARCHAR2(20) NOT NULL,
    balance NUMBER(10) NOT NULL
);
 
SELECT * FROM bank_account;

INSERT INTO bank_account VALUES ('1111', '김기용', 10000);

COMMIT;

DROP TABLE bank_account;