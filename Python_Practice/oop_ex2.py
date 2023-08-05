
class Book:
    def __init__(self, title, author, pages, price):
        self.title = title
        self.author = author
        self.pages = pages
        self.price = price
        self.__restricted = "can only be accessed using name mangling"
        
    #create instance method
    def getPrice(self):
        if hasattr(self, "_discount"):
            return self.price - (self.price * self._discount)
        else:
            return self.price
    
    def setDiscount(self,amount):
        self._discount = amount
        
    
        
b1 = Book("Winner", "Raymond", 200, 20)
print(b1.author)
print(b1.getPrice())

b1.setDiscount(0.2)
print(b1.getPrice())

#accessing "restriced" attribute using name mangling
print(b1._Book__restricted)


        