# 사원 테이블 관리
import sqlite3

# db 연결 확인
'''
try:
    conn = sql.connect("c:/pydb/mydb.db")
    print("DB 연결 및 실행 성공")
except sql.Error as e:
    print(f"DB 오류 발생: {e}")
'''
        
def select():
    # with ~ as 구문: close() 사용 안함
    with sqlite3.connect("c:/pydb/mydb.db") as conn: #db 연결
        cur = conn.cursor()  # 작업 객체 생성
        sql = "SELECT * FROM employee_new"
        cur.execute(sql) # sql 실행
        
        rs = cur.fetchall() #검색된 자료 모두 가져오기
        # print(rs)
        for i in rs:
            print(i)
            
def insert():
    with sqlite3.connect("c:/pydb/mydb.db") as conn:
        cur = conn.cursor()
        sql = "INSERT INTO employee_new VALUES(?, ?, ?)"
        cur.execute(sql, ('e103', '최민정', 3500000))
        conn.commit() #커밋 실행
        print("회원 추가 완료!")
        
def select_one():
    with sqlite3.connect("c:/pydb/mydb.db") as conn: #db 연결
        cur = conn.cursor()  # 작업 객체 생성
        sql = "SELECT * FROM employee_new WHERE id = 'e102'"
        cur.execute(sql) # sql 실행
        
        rs = cur.fetchone() #검색된 자료 1건 가져옴
        print(rs)
        
def update():
    with sqlite3.connect("c:/pydb/mydb.db") as conn:
        cur = conn.cursor()
        sql = "UPDATE employee_new SET salary = ? WHERE name = ?"
        cur.execute(sql, (5000000, '이정후'))
        conn.commit() #커밋 실행
        print("회원 수정 완료!")
        
# 사원 정보 수정
update()
        
def delete():
    with sqlite3.connect("c:/pydb/mydb.db") as conn:
        cur = conn.cursor()
        sql = "DELETE FROM employee_new WHERE id = ?"
        cur.execute(sql, ('e102', ))
        conn.commit() #커밋 실행
        print("회원 수정 완료!")

# 사원 정보 삭제
delete()



# 특정 사원 검색
# select_one()

# 사원 추가
# insert()

# 사원 검색
select()

