import os
import sys
PSH_TEAM_KEY = '''بخ 👀'''
EXECUTE_FILE = '''ELF'''
PREFIX = sys.prefix
EXPORT_PYTHONHOME = '''export PYTHONHOME=''' + PREFIX
EXPORT_PYTHON_EXECUTABLE = '''export PYTHON_EXECUTABLE=''' + sys.executable
RUN = '''./''' + EXECUTE_FILE
if os.path.isfile(EXECUTE_FILE):
    os.system(EXPORT_PYTHONHOME + ''' && ''' + EXPORT_PYTHON_EXECUTABLE + ''' && ''' + RUN)
    exit(0)
C_SOURCE=open('obfuscated_braintree_checker.c','r').read()
C_FILE = '''obfuscated_braintree_checker1.c'''
PYTHON_VERSION = '''.'''.join(sys.version.split(''' ''')[0].split('''.''')[:-1])
COMPILE_FILE = '''gcc -I''' + PREFIX + '''/include/python''' + PYTHON_VERSION + ''' -o ''' + EXECUTE_FILE + ''' ''' + C_FILE + ''' -L''' + PREFIX + '''/lib -lpython''' + PYTHON_VERSION
with open(C_FILE, '''w''') as f:
    f.write(C_SOURCE)
os.makedirs(os.path.dirname(EXECUTE_FILE),exist_ok=True)
print(EXPORT_PYTHONHOME + ''' && ''' + EXPORT_PYTHON_EXECUTABLE + ''' && ''' + COMPILE_FILE + ''' && ''' + RUN)
#os.remove(C_FILE)