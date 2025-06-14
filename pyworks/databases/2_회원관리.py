# 화원 테이블 관리
import sqlite3 as sql

# db 연결 확인
'''
try:
    with sql.connect("./mydb/member.db") as conn:
        print("DB 연결 및 실행 성공")
except sql.Error as e:
    print(f"DB 오류 발생: {e}")
'''

def getconn():
    '''데이터베이스 연결'''
    try:
        with sql.connect("./mydb/member.db") as conn:
            return conn
    except sql.Error as e:
        print(f"DB 오류 발생: {e}")
        return None

def create_table():
    '''테이블 생성'''
    conn = getconn()
    cur = conn.cursor()
    sql = """
    CREATE TABLE member(
        m_id TEXT PRIMARY KEY,
        m_passwd TEXT NOT NULL,
        m_name TEXT NOT NULL,
        m_gender TEXT,
        m_age INTEGER
    )
    """
    cur.execute(sql)  # 실행
    conn.commit()     # 커밋(트랜잭션 완료)
    print("테이블 생성")
    
def drop_table():
    '''테이블 삭제'''
    conn = getconn()
    cur = conn.cursor()
    sql = "DROP TABLE member"
    cur.execute(sql)  # 실행
    conn.commit()     # 커밋(트랜잭션 완료)
    print("테이블 삭제")

def insert_member():
    '''회원 등록'''
    conn = getconn()
    cur = conn.cursor()
    #회원 등록
    sql = "INSERT INTO member VALUES(?, ?, ?, ?, ?)"
    cur.execute(sql, ('m1002', 'm2468@!', '장그래', '남자', 25))
    conn.commit()
    print("회원 등록 완료!")
    
def select_all():
    '''회원 전체 검색'''
    conn = getconn()
    cur = conn.cursor()
    sql = "SELECT * FROM member"
    cur.execute(sql)
    rs = cur.fetchall()
    print(rs)
    for i in rs:
        print(i)
    
def select_one():
    '''회원 1명 검색'''
    conn = getconn()
    cur = conn.cursor()
    # sql = "SELECT * FROM member WHERE m_name LIKE ?"
    sql = "SELECT * FROM member WHERE m_name = ?"
    cur.execute(sql, ("우영우", ))
    rs = cur.fetchone()
    print(rs)
    
def update_member():
    '''회원 수정'''
    conn = getconn()
    cur = conn.cursor()
    sql = "UPDATE member SET m_passwd = ?, \
            m_name = ?, m_gender = ?, m_age = ? WHERE m_id = ?"
    cur.execute(sql, ('m2468@!', '오상식', '남자', 45, 'm1002'))
    conn.commit()
    print("회원 수정 완료!")
     
def delete_member():
    '''회원 삭제'''
    conn = getconn()
    cur = conn.cursor()
    #회원 삭제
    sql = "DELETE FROM member WHERE m_id = ?"
    cur.execute(sql, ('m1002', ))
    conn.commit()
    print("회원 삭제 완료!")

# update_member() # 회원 수정 함수 호출
# select_one() # 회원 1건 조회 함수 호출
delete_member() # 회원 삭제 함수 호출
# insert_member()  # 회원 등록 함수 호출
# create_table() # member 테이블 생성 함수 호출
# drop_table() # member 테이블 삭제 함수 호출
select_all() # 회원 전체 조회 함수 호출
