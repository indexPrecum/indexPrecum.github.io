#!/usr/bin/env python3

import os
from http.server import SimpleHTTPRequestHandler, HTTPServer

os.chdir('..')

server_adress = ('', 1850)

httpd = HTTPServer(server_adress, SimpleHTTPRequestHandler)
httpd.serve_forever()

