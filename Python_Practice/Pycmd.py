# Basic python script to open, run cmd and its internal commands

import subprocess

proc = subprocess.Popen('cmd.exe', stdin = subprocess.PIPE, stdout = subprocess.PIPE)
stdout, stderr = proc.communicate('dir c:\\')
stdout

