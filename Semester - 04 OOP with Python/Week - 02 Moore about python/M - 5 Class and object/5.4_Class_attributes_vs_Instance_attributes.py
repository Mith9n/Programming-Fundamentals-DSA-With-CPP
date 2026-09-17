class shop:
    cart = []
    
    def __init__(self,buyer):  #instance_attributes
        self.buyer = buyer 
        
    def add_to_card(self,items): #class_attributes
        self.cart.append(items)
        

Ayeon = shop("Ayeon")
Ayeon.add_to_card('shoes')
Ayeon.add_to_card('phone')
Ayeon.add_to_card('head-phone')


print(Ayeon.cart)

        