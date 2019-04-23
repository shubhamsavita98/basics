
Inpalin = raw_input("Enter any name or sentence.")

CheckPalin = Inpalin.replace(" ","")

if CheckPalin == CheckPalin[::-1]:
	print("It is Palindrome")
else:
	print("It is not palindrome")	

