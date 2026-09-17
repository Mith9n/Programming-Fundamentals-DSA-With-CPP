class phone:
    name = 'redmi'
    model = 'Note 12 4G'
    price = 24000
    feature = ['camera - 124 pxl','6nm chipset','5000MH battery']
    
    def call(self):
        print("Hello,Everyone !")
        
    def send_message(self,phone,gmail):
        text = f"sending message to :{phone} and gmail aslo :{gmail} "
        return text
    

my_phone = phone()

print(phone.name,"\n",phone.model,"\n",phone.price,"\n",phone.feature)

my_phone.call()

result = my_phone.send_message("Company rules","joining mail")
print(result)
    