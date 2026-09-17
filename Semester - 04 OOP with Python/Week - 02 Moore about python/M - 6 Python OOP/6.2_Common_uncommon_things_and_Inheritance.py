class Laptop :
    def __init__(self,brand,price,colour,menufacture):
        self.brand = brand 
        self.price = price 
        self.colour = colour
        self.menufacture = menufacture
        
    #user def
    
    def run(self):
        return f'running loptop:{self.brand}'
    
    def coding(self):
        return f'learing python'
    
    
class phone :
    def __init__(self,brand,price,colour,menufacture,sim,memory,rom,):
        self.brand = brand 
        self.price = price 
        self.colour = colour
        self.menufacture = menufacture
        self.sim = sim 
        self.memory = memory
        self.rom = rom 
        
    def run(self):
        return f'running phone:{self.brand}'
    
    def smart(self):
        return f'latest configaration'
             
class camera :
    def __init__(self,brand,price,colour,menufacture,camera_type,camera_pixel,sensor_formet):
        self.brand = brand 
        self.price = price 
        self.colour = colour
        self.menufacture = menufacture
        self.camera_type = camera_type
        self.camera_pixel = camera_pixel 
        self.sensor_formet = sensor_formet
        
    def run(self):
        return f'running camera:{self.brand}'
    
    def smart(self):
        return f'latest pixel updated'
    

        
        
    