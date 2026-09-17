class Phone:
    def __init__(self, name, model, price, feature):
        self.name = name
        self.model = model
        self.price = price
        self.feature = feature

# অবজেক্ট তৈরি করা
my_phone = Phone("Redmi", "Note 12 4G", 24000, ["camera - 124 pxl", "6nm chipset", "5000MH battery"])
my_phone = Phone("Realme", "HOT 15", 16000, ["camera - 24 pxl", "12nm chipset", "5000MH battery"])

print(my_phone.name)    
print(my_phone.model)   
print(my_phone.price)   
print(my_phone.feature) 
