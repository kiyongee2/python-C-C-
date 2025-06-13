# 화원 테이블 관리
import pymysql as sql

'''
try:
    # pydb 생성
    conn = sql.connect(host = 'localhost', database='pydb', 
            user='pyuser2', password='pwpy', charset='utf8')
    print("DB 연결 및 실행 성공")
except sql.Error as e:
    print(f"DB 오류 발생: {e}")
'''

# db 연결 함수 정의
def getconn():
    ''' db에 연결'''
    conn = sql.connect(host = 'localhost', database='pydb', 
            user='pyuser2', password='pwpy', charset='utf8')
    return conn

def create_table():
    ''' member 테이블 생성 '''
    conn = getconn()
    cur = conn.cursor()
    sql = """
    CREATE TABLE member(
        m_id VARCHAR(20) PRIMARY KEY,
        m_passwd VARCHAR(100) NOT NULL,
        m_name VARCHAR(30) NOT NULL,
        m_gender VARCHAR(10),
        m_age INT
    )
    """
    cur.execute(sql)  # 실행 
    conn.commit()     # 커밋(트랜잭션 완료)
    conn.close()
    print("회원 테이블 생성!")

def insert_member():
    ''' 회원 등록 '''
    conn = getconn()
    cur = conn.cursor()
    sql = "INSERT INTO member VALUES \
        ('m1004', 'm1357@!', '장그래', '남자', 25)"
    cur.execute(sql)
    conn.commit()
    conn.close()
    print("회원 등록 완료!")
    
def select_member():
    ''' 회원 전체 검색 '''
    conn = getconn()
    cur = conn.cursor()
    sql = "SELECT * FROM member"
    cur.execute(sql)
    rs = cur.fetchall()
    print(rs)
    for i in rs:
        print(i)
    conn.close()
    
def select_one():
    ''' 회원 1명 검색 '''
    conn = getconn()
    cur = conn.cursor()
    sql = "SELECT * FROM member WHERE m_name LIKE '우영우'"
    # sql = "SELECT * FROM member WHERE m_name = '우영우'"
    cur.execute(sql)
    rs = cur.fetchone()
    print(rs)
    conn.close()
    
def update_member():
    ''' 회원 수정 '''
    conn = getconn()
    cur = conn.cursor()
    sql = "UPDATE member SET m_passwd = 'm2468@!', m_name = '오상식', \
            m_gender = '남자', m_age = 45 WHERE m_id = 'm1004'"
    cur.execute(sql)
    conn.commit()
    conn.close()
    print("회원 수정 완료!")

def delete_member():
    ''' 회원 삭제 '''
    conn = getconn()
    cur = conn.cursor()
    sql = "DELETE FROM member WHERE m_id = 'm1004'"
    cur.execute(sql)
    conn.commit()
    conn.close()
    print("회원 삭제 완료!")

# select_one() # 회원 1건 조회 함수 호출
# update_member() # 회원 수정 함수 호출
# delete_member() # 회원 삭제 함수 호출

insert_member()  # 회원 등록 함수 호출
select_member() # 회원 전체 조회 함수 호출
# create_table() # member 테이블 생성 함수 호출
