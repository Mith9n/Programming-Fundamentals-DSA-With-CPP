class Devies :
    def __init__(self,brand,price,colour,menufacture):
        self.brand = brand 
        self.price = price 
        self.colour = colour
        self.menufacture = menufacture

class Laptop(Devies) :
    def __init__(self,brand,price,colour,menufacture,ram,ssd,processor):
        super().__init__(brand,price,colour,menufacture)
        self.ram = ram 
        self.ssd = ssd 
        self.processor = processor   
        
    #user def
    def run(self):
        return f'running laptop : {self.brand}'
    
    def coding(self):
        return f'learing python'
    
    
class phone(Devies) :
    def __init__(self,brand,price,colour,menufacture,sim,memory,rom,):
        super().__init__(brand,price,colour,menufacture)
        self.sim = sim 
        self.memory = memory
        self.rom = rom 
        
    def run(self):
        return f'running phone:{self.brand}'
    
    def smart(self):
        return f'latest configaration'
             
class camera(Devies) :
    def __init__(self,brand,price,colour,menufacture,camera_type,camera_pixel,sensor_formet):
        super().__init__(brand,price,colour,menufacture)
        self.camera_type = camera_type
        self.camera_pixel = camera_pixel 
        self.sensor_formet = sensor_formet
        
    def run(self):
        return f'running camera:{self.brand}'
    
    def smart(self):
        return f'latest pixel updated'
    
#brand,price,colour,menufacture,ram,ssd,processor
my_laptop = Laptop('hp',650000,'silver','china','16GB','1TB','Rayzan - 5 , 5600GT')
print(my_laptop.brand,my_laptop.price, my_laptop.colour,my_laptop.menufacture,my_laptop.ram,my_laptop.ssd,my_laptop.processor)

print(my_laptop.run())
        
    