'''

class Car:
    def __init__(self, brand, model):  # Constructor
        self.brand = brand
        self.model = model

    def show_info(self):  # Instance Method
        print(f"Car Brand: {self.brand}, Model: {self.model}")

# অবজেক্ট তৈরি ও মেথড কল করা
my_car = Car("Toyota", "Corolla")
my_car.show_info()

'''



class Calculator:
    brand = "Casio 991x"
    
    def addition (self , num_1 , num_2):
        return num_1 + num_2 
    
    def deduct (self , num_1 , num_2):
        return num_1 - num_2 
    
    def multiply (self , num_1 , num_2):
        return num_1 * num_2 
    
    def division (self , num_1 , num_2):
        return num_1 / num_2 
    
    
print(Calculator().addition(10,20))
print(Calculator().deduct(20,2))
print(Calculator().multiply(10,5))
print(Calculator().division(20,4))

        