from abc import ABC , abstractmethod

#abstract base class
class Animal:
    @abstractmethod
    def eat(self):
        pass
    @abstractmethod
    def move (slef):
        pass
    
    
class parrot(Animal):
    def __init__(self,name):
        super().__init__()
        self.name = name
        self.category = 'bird'
        
    def eat(self):
        return f'{self.name} , eat Guava !'
    
    def move (self):
        return f'{self.name}, can fly '
        
class Hilsa_Fish(Animal):
    def __init__(self,name):
        super().__init__()
        self.name = name
        self.category = 'fish'
        
    def eat(self):
        return f'{self.name} , eat plankton !'
    
    def move (self):
        return f'{self.name}, can swim '
    
        
Bird = parrot('mithu')
print('Parrot details:',Bird.name,Bird.category,Bird.eat())
Fish = Hilsa_Fish('Hilsa')
print('Hilsa Fish details:',Fish.name,Fish.category,Fish.eat())