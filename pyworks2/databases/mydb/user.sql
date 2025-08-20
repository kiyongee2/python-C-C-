-- user 테이블
CREATE TABLE user(
	u_id	  text primary key, -- 아이디
	u_passwd  text not null,    -- 패스워드
	u_name	  text not null,    -- 이름
	u_joindate text default (datetime('now', '+9 hours')) -- 가입일 (KST)
);

-- 유저 추가
INSERT INTO user(u_id, u_passwd, u_name) VALUES ('u101', '1234!@', '우상혁');
INSERT INTO user(u_id, u_passwd, u_name) VALUES ('u102', '1234#$', '신유빈');
INSERT INTO user(u_id, u_passwd, u_name) VALUES ('u103', '5678#$', '한강');

-- 유저 검색
SELECT * FROM user;

-- 최근 가입한 순으로 정렬하기
SELECT * FROM user ORDER BY u_joindate DESC;

-- 테이블 삭제
DROP TABLE user;
