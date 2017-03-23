#!/usr/bin/python

import psycopg2

# Try to connect

try:
    conn=psycopg2.connect("dbname='pedidos' user='postgres' password='admin'")
except:
    print "Nao consegui conectar com o banco de dados"

cur = conn.cursor()
try:
    cur.execute("""SELECT * from offices""")
except:
    print "Nao foi possivel"

rows = cur.fetchall()
print "\nLinhas: \n"
for row in rows:
    print "   ", row[1]