class device :
    def __init__(self,name,price):
        self.name = name 
        self.price = price
        
    def product_name (self):
        return (f'The product name is :{self.name}')
        
        
    def product_price (self):
        return (f'The product name is :{self.price}')
        
        
        
product = device('hp',62300)

print(product.product_name())
print(product.product_price())