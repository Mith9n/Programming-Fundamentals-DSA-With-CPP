class Bank:
    def __init__(self, owner_name, initial_deposit):
        self.owner_name = owner_name
        self.total_money = initial_deposit

    def monthly_deposit(self, monthly_deposit):
        self.total_money += monthly_deposit

    def withdraw(self, withdraw_amount):
        if withdraw_amount <= self.total_money:
            self.total_money -= withdraw_amount
            return self.total_money
        else:
            return "Insufficient balance"

Mr_Asif = Bank('Asif Khan Rayan', 25000)
print(Mr_Asif.withdraw(5000))

