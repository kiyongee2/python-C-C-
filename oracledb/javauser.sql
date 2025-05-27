
-- 새 계정 만들고 권한 설정

-- 세션 설정
ALTER SESSION SET "_ORACLE_SCRIPT" = TRUE;

-- javauser 생성
CREATE USER javauser IDENTIFIED BY pwjava;

-- 권한 부여
GRANT CONNECT, RESOURCE, DBA TO javauser;

