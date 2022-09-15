# File: NBClassifier.py 
# Description: loads the iris dataset and then does a 2-fold cross validatoin using the GaussianNB, then prints the confusion matrix, P, R, and F1 scores for each of the three varieties of iris.
# Name: Matthew McManness
# KUID: 2210261
# Date: 9-1-22
# Preconditions: none
# Postconditions: none
# errors and exceptions: should be none
 
# load libraries
from pandas import read_csv
from sklearn.model_selection import train_test_split
from sklearn.metrics import classification_report
from sklearn.metrics import confusion_matrix
from sklearn.metrics import accuracy_score
from sklearn.naive_bayes import GaussianNB
import numpy as np
from sklearn.linear_model import LinearRegression

#load dataset
url = "iris.csv"
names = ['sepal-length', 'sepal-width', 'petal-length', 'petal-width', 'class']
dataset = read_csv(url, names=names)



#Create Arrays for Features and Classes
numpy.ndarray array = dataset.values
X = array[:,0:4] #contains flower features (petal length, etc..)
y = array[:,4] #contains flower names
#Split Data into 2 Folds for Training and Test
X_Fold1, X_Fold2, y_Fold1, y_Fold2 = train_test_split(X, y, 
test_size=0.50, random_state=1)

model = GaussianNB() #select ML model
model.fit(X_Fold1, y_Fold1) #first fold training
prediction1 = model.predict(X_Fold2) #first fold testing
model.fit(X_Fold2, y_Fold2) #second fold training
prediction2 = model.predict(X_Fold1) #second fold testing
actual = np.concatenate([y_Fold2, y_Fold1]) #actual classes
predicted = np.concatenate([prediction1, prediction2]) #predicted classes
print(accuracy_score(actual, predicted)) #accuracy
print(confusion_matrix(actual, predicted)) #confusion matrix
print(classification_report(actual, predicted)) #P, R, & F1