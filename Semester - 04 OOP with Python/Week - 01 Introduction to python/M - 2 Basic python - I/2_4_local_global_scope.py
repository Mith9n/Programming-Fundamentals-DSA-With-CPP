# global variable
balance = 10000

def buy_things(items,price):
    # now_balance = balance - price
    # return now_balance
    # gobal varibale korle must diclear korte hobe .
    global balance 
    balance = balance - price 
    return balance
    
    
total = buy_things('sunglass',1000)
print(total)