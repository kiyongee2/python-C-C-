# 회원 DB 관리
# 별칭 사용 - sql
import sqlite3 as sql

# db 생성 및 연결
# member.db 자동 생성됨
try:
    with sql.connect("./mydb/member.db") as conn:
        print("DB 생성 및 연결 성공!!")
except sql.Error as e:
     print(f"DB 오류 발생: {e}")
    

# DB 연결 함수 정의
def getconn():
    try:
        return sql.connect("./mydb/member.db")
    except sql.Error as e:
        print(f"DB 오류 발생: {e}")
        return None

def create_table():
    '''테이블 생성'''
    conn = getconn()    #DB 연결 함수 호출
    cur = conn.cursor() #작업 객체 생성
    sql = """
    CREATE TABLE member(
        m_id text primary key,
        m_passwd text not null,
        m_name text not null,
        m_joindate text default (datetime('now', '+9 hours'))
    )
    """
    cur.execute(sql) #sql(실행)
    conn.commit() #커밋(트랜잭션)
    print("테이블 생성")

def insert_member():
    '''회원 등록'''
    conn = getconn()
    cur = conn.cursor()
    # 동적 바인딩 방식(? - 칼럼값 입력), 튜플 형태로 입력
    sql = "INSERT INTO member VALUES(?, ?, ?, datetime('now', '+9 hours'))"
    cur.execute(sql, ('m1002', 'm1357@!', '장그래'))
    conn.commit()
    print("회원 등록 완료!")
    
# 회원을 여러명 등록(리스트 사용)
def insert_members():
    '''회원 등록'''
    conn = getconn()
    cur = conn.cursor()
    # 동적 바인딩 방식(? - 칼럼값 입력), 튜플 형태로 입력
    sql = "INSERT INTO member VALUES(?, ?, ?, datetime('now', '+9 hours'))"
    member_list = [
        ['m1003', "m0000", "콩쥐"],
        ['m1004', "m1111", "팥쥐"],
        ['m1005', "m2222", "심청"],
    ]
    cur.executemany(sql, member_list)
    conn.commit()
    print("회원 등록 완료!")

def select_all():
    '''회원 전체 검색'''
    conn = getconn()
    cur = conn.cursor()
    sql = "SELECT * FROM member"
    cur.execute(sql)
    rs = cur.fetchall() #모두 검색
    # print(rs)
    for i in rs:
        print(i)

def select_one():
    '''회원 전체 검색'''
    conn = getconn()
    cur = conn.cursor()
    sql = "SELECT * FROM member WHERE m_name LIKE ?"
    cur.execute(sql, ('우영우', )) #튜플이므로 콤머 사용할 것!
    rs = cur.fetchone()  # 1건 검색
    print(rs)

def update_member():
    '''회원 수정'''
    conn = getconn()
    cur = conn.cursor()
    sql = "UPDATE member SET m_passwd=?, m_name=?, \
            m_joindate=datetime('now', '+9 hours') WHERE m_id = ?"
    cur.execute(sql, ('m1357@!', '오상식', 'm1002'))
    conn.commit()
    print("회원 수정 완료!")

def delete_member():
    '''회원 삭제'''
    conn = getconn()
    cur = conn.cursor()
    # 기본키로 삭제 할것!
    sql = "DELETE FROM member WHERE m_id = ?"
    cur.execute(sql, ('m1001',)) #튜플이므로 콤머 사용할 것!
    conn.commit()
    print("회원 삭제 완료!")

def drop_table():
    '''테이블 삭제'''
    conn = getconn()    #DB 연결 함수 호출
    cur = conn.cursor() #작업 객체 생성
    sql = "DROP TABLE member"
    cur.execute(sql) #sql(실행)
    conn.commit() #커밋(트랜잭션)
    print("테이블 삭제")

# create_table()
# insert_member()
insert_members()
# update_member()
# delete_member()
select_all()
# select_one()
# drop_table()






