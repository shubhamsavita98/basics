def summer_69(arr):
    add = True
    sum = 0
    for i in arr:
        while add:
            if i != 6:
                sum += i
                break
            else:
                add = False
        while not add:
            if i != 9:
                break
            else:
                add = True
                break
    print sum  



summer_69([1,2,4,6,7,8,9,4,3])    