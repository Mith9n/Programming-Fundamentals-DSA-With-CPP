class device:
    def __init__(self,brand,price,colour):
        self.brand = brand 
        self.price = price 
        self.colour = colour
    def __repr__(self):
        return f'{self.brand},{self.price},{self.colour}'
        
class phone (device):
    def __init__(self,brand,price,colour,model,ram,rom):
        self.model = model 
        self.ram = ram 
        self.rom = rom 
        super().__init__(brand,price,colour) #parent call 
        
    def __repr__(self):
        return  f'{super().__repr__()},{self.model},{self.ram},{self.rom}'
        
class laptop (phone):
    def __init__(self,brand,price,colour,model,ram,rom,processor):
        self.processor = processor
        super().__init__(brand,price,colour,model,ram,rom) #parent phone call 
        
    
    def __repr__(self):
        return f'{ super().__repr__()},{self.processor}'
      
product = laptop('hp',62300,'silver','mt44','12GB','512GB','Ryzen 5 5600GT')
#print(product.brand,product.price,product.colour,product.model,product.ram,product.rom,product.rom)
devices = device("lenevo",'black','note-book 2017')
print(devices)
print(product)