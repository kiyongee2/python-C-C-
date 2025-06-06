
-- BankAccount 테이블 생성
CREATE TABLE bank_account(
    ano     VARCHAR2(10) PRIMARY KEY,
    owner   VARCHAR2(20) NOT NULL,
    balance NUMBER(10) NOT NULL
);


DROP TABLE bank_account;