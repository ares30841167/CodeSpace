#Python Basic Practice

#list []
mylist = ["computer", 14, 3.1415926]
mylist[1]
mylist[2]

#dictionary {}
mydict = {"My Food" : "apple" , 3.14 : "Pi" , "tensorflow" : "Deep Learning"}
mydict["tensorflow"]
mydict[3.14]

#Tuple ()
mytuple = (2,3,5,1,4)
mylength = len
mylength (mytuple)

#output Range (End Element will not show out)
mylist[1:2]
mytuple[2:4]

#String

print ("Name: %s \nNumber: %s\nString: %s" % ('Areschen', 34 , 3 * '-')) #Tuple
print ("My name is %(name)s,I am %(age)s old." % {"age" : 18,"name" : "Areschen"})#dictionary

#def and Lambda
def max1(x,y):
    return x if x > y else y
print(max1 (10,8))

max2 = lambda x,y: x if x > y else y
print(max2 (10,8))

func1 = lambda x : x + 1
print(func1(1))

def func2(x):
    return x + 1
print (func2(1))

#Class
class MyClass:
    common = 20
    def myfunc(x):
        return x +3

L1 = MyClass()
print(L1.common)
L2 = MyClass()
print(L2.common)
L1.common = 50
print(L1.common)
print(L2.common)
MyClass.common = 100
print(L1.common)
print(L2.common)
print(MyClass().common)
