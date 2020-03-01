#!/usr/bin/python3
# -*- coding: utf-8 -*-

from flask import Flask,render_template,request,redirect,make_response   

app = Flask(__name__)

@app.route('/')
def index():
    return render_template('index.html')

@app.route('/browser')
def browser():
    use_agent = request.headers.get('User-Agent')
    return '<p>Your browser is %s</p>' % use_agent 

@app.route('/pic')
def pic():
    return "<img src='/static/images/pic.jpg', alt='losing'>"

@app.route('/hello/<name>')
def hello(name):
    return render_template('page.html', name=name)

# 设置返回码
@app.route('/error')
def error():
    return '<h1>You have a error</h1>', 400

# cookie
@app.route('/cookie')
def cookie():
    response = make_response('<h1>This document carries a cookie</h1>')
    response.set_cookie('answer', 42)
    return response 

# 重定向
@app.route('/baidu')
def baidu():
    return redirect('http://www.baidu.com')

if __name__ == '__main__':
    app.run(debug=True, host='0.0.0.0')
