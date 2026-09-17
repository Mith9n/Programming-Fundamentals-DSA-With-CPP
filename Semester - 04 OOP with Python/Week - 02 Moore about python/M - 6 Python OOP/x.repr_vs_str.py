class Laptop:
    def __init__(self, brand, price, ram):
        self.brand = brand
        self.price = price
        self.ram = ram

    def __repr__(self):
        return f"Laptop(brand='{self.brand}', price={self.price}, ram='{self.ram}')"
    
    def __str__(self):
        return f"{self.brand} Laptop with {self.ram} RAM costs {self.price} Taka."

laptop1 = Laptop("Dell", 80000, "16GB")

print(repr(laptop1))  # ✅ Debugging-friendly output
print(str(laptop1))   # ✅ User-friendly output
