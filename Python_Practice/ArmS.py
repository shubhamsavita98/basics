CheckNumber = input("Enter any 3 digit number.")

stringlength = len(str(CheckNumber))

if stringlength != 3:
	print('Plase Enter 3 Digit Number.')

cubes = 0
for i in str(CheckNumber):
	cubes = cubes + (int(i) ** 3)

if cubes == CheckNumber:
	print('This is an Armstrong Number')
else:
	print('This is not an Armstrong Number')		




