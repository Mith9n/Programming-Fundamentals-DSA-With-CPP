class Shopping:
    def __init__(self,name):
        self.name = name 
        self.cart = []
        
    def add_to_cart (self,items,price,quantity):
        self.price = price 
        product = {'Items :',items,'Price :',price,'quantity :',quantity}
        
        self.cart.append(product)
        
    def checkout (self):
        total_price = 0
        for items in self.cart

    

Ayeon = Shopping("Ayeon")
Ayeon.add_to_cart('Alu',100,5)
Ayeon.add_to_cart('dal',120,1)
Ayeon.add_to_cart('oil',180,1)

print(Ayeon.cart)
        
        