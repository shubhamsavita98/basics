##class introduction

class className:
	def functionName(self, name):
		self.name = name

	def DisplayName(self):
		print(self.name)

	def saying(self):
		print("hello %s" % self.name)	

#creating firstName and secondName objects
firstName = className()
secondName = className()


#These prints gives the address of objects created.
print("Printing Objects Addresses....")
print(firstName)
print(secondName)
print("******************")

#Passing the name to the fucntion using objects of the Class.

firstName.functionName('SHUBHAM')
secondName.functionName('RAHUL')

#this will return the names.
print("Printing Names.....")
firstName.DisplayName()
secondName.DisplayName()
'''

print(fn)
print(sn)
print("******************")
'''
#These will print names with hello
print("Hello with name.....")
firstName.saying()
secondName.saying()

#print(firstName.name)
#print(secondName.name)