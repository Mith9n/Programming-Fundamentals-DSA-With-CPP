class device:
    def __init__(self,brand,price,colour,menufacture,warranty):
        self.brand = brand 
        self.price = price 
        self.colour = colour
        self.menufacture = menufacture
        self.warranty = warranty
        
        
    def run_device(self):
        return f'The device totaly okay , brand name is :{self.brand}'
    
    
class phone(device):
    def __init__(self,brand,price,colour,menufacture,warranty,ram,rom,display,charger,camera):
        super().__init__(brand,price,colour,menufacture,warranty)
        self.ram = ram 
        self.rom = rom 
        self.display = display
        self.charger = charger
        self.camera = camera 
        
        
        

devices_01 = phone('sumsung',120000,'rose - gold','chaina','12 months','12GB','512GB','super amoled','85w','200px')

print(devices_01.brand,devices_01.price,devices_01.colour,devices_01.menufacture,devices_01.warranty,devices_01.rom,devices_01.ram,devices_01.display,devices_01.charger)