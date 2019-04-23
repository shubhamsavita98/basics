def printingSum(a1, a2, a3, a4):
    sum = a1 + a2 + a3 + a4
    return sum

def checkthecatch(sum):
	if sum<=9:
		print sum
	else:
		print 9	

checkthecatch(printingSum(2,2,3,2))