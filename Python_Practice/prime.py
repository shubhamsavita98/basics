CheckNumber = input('Enter the number till all primes will be sorted: ')
count = 0
for i in range(2, CheckNumber):
	for check in range(2, i+1):
		if i%check == 0:			
			break	
	if i == check:
		print "number {} is prime.".format(i)
		count += 1

print "Total prime numbers till number {} is : {}".format(CheckNumber, count)




####-------------------------------------------

# ANOTHER METHOD********************


num = 7

# take input from the user
# num = int(input("Enter a number: "))

# prime numbers are greater than 1
if num > 1:
   # check for factors
   for i in range(2,num):
       if (num % i) == 0:
           print(num,"is not a prime number")
           break
   else:
       print(num,"is a prime number")
else:
   print(num,"is not a prime number")

   
