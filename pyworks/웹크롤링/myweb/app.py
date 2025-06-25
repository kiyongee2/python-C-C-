# flask 웹 서버
from flask import Flask, render_template

app = Flask(__name__)  #app 객체 생성

@app.route('/') #http://127.0.0.1:5000/
def index():
    # return "<h1>Welcome~ My Home!!</h1>"
    return render_template('index.html') #인덱스 페이지 랜더링

app.run()
