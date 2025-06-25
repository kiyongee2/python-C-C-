# flask 서버
from flask import Flask

app = Flask(__name__)  #app 객체 생성

@app.route('/') #http://127.0.0.1:5000/
def index():
    return "<h1>Welcome~ My Home!!</h1>"

@app.route('/login') #http://127.0.0.1:5000/login
def login():
    return "<h1>로그인 페이지</h1>"

@app.route('/board/list') #http://127.0.0.1:5000/board/list
def board():
    return "<h1>게시판 글목록 페이지</h1>"


app.run()