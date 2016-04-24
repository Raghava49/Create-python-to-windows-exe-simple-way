from distutils.core import setup
import py2exe, sys, os

sys.argv.append('py2exe')

with open('C:/Python26/name.rag', 'r') as f:
	val = f.read()
f.closed

setup(console=[val])