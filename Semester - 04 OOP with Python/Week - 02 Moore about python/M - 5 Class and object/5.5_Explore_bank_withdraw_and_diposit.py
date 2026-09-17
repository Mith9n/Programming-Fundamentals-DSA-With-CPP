class Bank:
    def __init__(self , balance):
        self.balance = balance 
        self.min_withdraw = 100
        self.max_withdraw = 1000
        
        
    def get_balance(self):
        return self.balance
    
    def deposit (self,amount):
        if amount > 0 :
            self.balance+=amount
        
    def withdraw (self,amount):
        if amount < self.min_withdraw:
            print(f"You cannot withdraw,your blance is lessthen 100")
        elif amount > self.max_withdraw:
            print ( f'Max limits end' )
        else:
            self.balance -= amount 
            print("Here is your Money :",self.balance)


Brac_bank = Bank(5000)
Brac_bank.withdraw(500)
Brac_bank.withdraw(200)
        