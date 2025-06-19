from flask import Flask, request, jsonify

app = Flask(__name__)

@app.route('/')
def index():
    return "Hello~ flask"

@app.route('/board')
def board():
    return "게시판 페이지 입니다."

@app.route('/api/hello', methods=['GET'])
def hello():
    """JSON 응답 예제"""
    name = request.args.get('name', 'Guest')
    
    return jsonify({
        'message': f'안녕하세요, {name}!',
        'status': 'success'
    })
    
@app.route('/api/greet', methods=['POST'])
def greet():
    """POST 요청 처리 예제"""
    data = request.get_json()
    if not data or 'name' not in data:
        return jsonify({'error': '이름을 제공해주세요'}), 400
    
    return jsonify({
        'greeting': f'{data["name"]}님, 환영합니다!',
        'language': 'Korean'
    })

app.run()


