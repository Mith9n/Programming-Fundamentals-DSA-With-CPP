class Father:
    def skill(self):
        print("Gardening")

class Mother:
    def talent(self):
        print("Cooking")

class Child(Father, Mother):   # Multiple Inheritance
    def hobby(self):
        print("Gaming")
        
c = Child()
c.skill()
c.talent()
c.hobby()
