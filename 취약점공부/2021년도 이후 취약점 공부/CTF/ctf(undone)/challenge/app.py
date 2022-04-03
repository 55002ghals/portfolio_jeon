import os
import requests
from flask import Flask, render_template, request, Response, redirect, flash

app = Flask(__name__)
app.config['SECRET_KEY'] = os.urandom(0x20)

@app.route('/', methods=['GET', 'POST'])
def index():
    if request.method == 'GET':
        return render_template('index.html')

    if 'url' not in request.form:
        return render_template('index.html', error='Invalid form submission')

    url = request.form['url']
    r = requests.get(url)
    return Response(r.text)

if __name__ == '__main__':
    app.run(host="0.0.0.0", port=40006)