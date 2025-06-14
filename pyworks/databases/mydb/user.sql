-- sqlite3 테이블 생성
CREATE TABLE user(
	u_id VARCHAR(20) PRIMARY KEY,    -- 아이디
	u_passwd VARCHAR(100) NOT NULL,  -- 비밀번호
	u_name VARCHAR(30) NOT NULL,     -- 이름
	u_joindate TEXT DEFAULT CURRENT_TIMESTAMP -- 가입일
);

-- 유저 추가
INSERT INTO user(u_id, u_passwd, u_name) VALUES('u101', '1234@!', '상혁');
INSERT INTO user(u_id, u_passwd, u_name) VALUES('u102', '5678@!', '시현');
INSERT INTO user(u_id, u_passwd, u_name) VALUES('u103', '4321@!', '정후');

SELECT * FROM user;

-- 최근에 가입한 순서로 정렬하기
SELECT * FROM user ORDER BY u_joindate DESC;

COMMIT;

DROP TABLE user;