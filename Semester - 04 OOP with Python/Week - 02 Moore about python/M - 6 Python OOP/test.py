class Device:
    def __init__(self, brand, price, colour):
        self.brand = brand
        self.price = price
        self.colour = colour

class Phone(Device):
    def __init__(self, brand, price, colour, sim):
        super().__init__(brand, price, colour)  # Parent class এর constructor কল করলাম
        self.sim = sim
        
        
class Phone(Device):
    def __init__(self, brand, price, colour, sim):
        super().__init__(brand, price, colour)  # Parent class এর constructor কল করলাম
        self.sim = sim

phone1 = Phone("Samsung", 50000, "Blue", "Dual SIM")

print(phone1.brand)  # ✅ Samsung
print(phone1.price)  # ✅ 50000
print(phone1.colour) # ✅ Blue
print(phone1.sim)    # ✅ Dual SIM


phone2 = Phone("Sam", 50, "Blu", "Dul SIM")

print(phone2.brand)  # ✅ Samsung
print(phone2.price)  # ✅ 50000
print(phone2.colour) # ✅ Blue
print(phone2.sim)    # ✅ Dual SIM
