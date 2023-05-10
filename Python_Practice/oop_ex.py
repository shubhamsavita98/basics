##oop scenarios
##parent class SOC
class NVSoCs:
    ## initialize method
    def __init__(self,architecture="ARM", name="CPU"):
        self.architecture = architecture
        self.name = name
        
    def generateConfig(self):
        pass
    
    
##child class
class Jetson(NVSoCs):
    
    def __init__(self):
        super().__init__()
        self.name = "TegraTX1"
    
    
##child class 2
class Quill(NVSoCs):
    
    def __init__(self):
        super().__init__()
        self.name = "TegraTX2"


class NVgpus:
    pass
        

#executing above classes
my_soc = NVSoCs()
print("parent class :\n")
print(my_soc.architecture)
print(my_soc.name)

next_soc = Jetson()
print("\nJetson class :\n")
print(next_soc.architecture)
print(next_soc.name)

third_soc = Quill()
print("\nQuill class :\n")
print(third_soc.architecture)
print(third_soc.name)




        