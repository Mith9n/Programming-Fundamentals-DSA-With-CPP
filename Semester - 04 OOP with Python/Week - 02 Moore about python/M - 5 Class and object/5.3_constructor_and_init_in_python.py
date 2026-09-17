class phone :
    manufactured = "Chaina"
    
    def __init__(self,owner,brand,price): #  # Constructor   
        self.owner = owner 
        self.brand = brand
        self.price = price
        
    def send_sms(self,whatsapp,gamil):
        text = f'send message whatsapp :{whatsapp} , and also :{gamil}'
        return text 
    
my_phone = phone("Ayeon","redmi",24000)
print(my_phone.owner,my_phone.brand,my_phone.price)

her_phone = phone("Missme","iphone",120000)
print(her_phone.owner,her_phone.brand,her_phone.price)

def_acc = phone.send_sms()

    
