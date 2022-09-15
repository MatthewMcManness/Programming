# File: CheckVersions.py 
# Description: Checks the versions of Python, Scipy, numpy, pandas, and scikit-learn installed on the system and prints hello world.
# Name: Matthew McManness
# KUID: 2210261
# Date: 9-1-22
# Preconditions: none
# Postconditions: none
# errors and exceptions: should be none
 
 # Python version 
import sys 
print('Python: {}'.format(sys.version)) 
# scipy 
import scipy 
print('scipy: {}'.format(scipy.__version__)) 
# numpy 
import numpy 
print('numpy: {}'.format(numpy.__version__)) 
# pandas 
import pandas 
print('pandas: {}'.format(pandas.__version__)) 
# scikit-learn 
import sklearn 
print('sklearn: {}'.format(sklearn.__version__)) 

#Prints Hello World to the console
print ("Hello World!")