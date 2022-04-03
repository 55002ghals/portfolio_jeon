import os
import requests
from flask import Flask, render_template, request, Response, redirect, flash

app = Flask(__name__)
app.config['SECRET_KEY'] = os.urandom(0x20)

FLAG = '**REDACTED(REAL FLAG IS IN SERVER)**'

@app.route('/', methods=['GET', 'POST'])
def index():
    return FLAG

if __name__ == '__main__':
    app.run(port=8080)