#Encaptulation 

class Bank:
    def __init__(self,user_name,initial_deposit):
        self.user_name = user_name #public
        self._branch = 'Uttra - 6' #protected
        self.__balance = initial_deposit #private
        
    def deposit(self,amount):
        self.__balance += amount
        
    def get_balance (self):
        return self.__balance
    def withwrad (self,w_amount):
        if w_amount > self.__balance:
            return f"your have not enought amount"
        else:
            with_wrad = self.__balance - w_amount
            return with_wrad
        

Razaul_karim = Bank("Razaul Karim",25000)

#print(Razaul_karim.user_name,Razaul_karim.initial_deposit)


Razaul_karim.deposit(10000)
print(Razaul_karim.user_name)
print(Razaul_karim.get_balance())
print(Razaul_karim.withwrad(500))

    