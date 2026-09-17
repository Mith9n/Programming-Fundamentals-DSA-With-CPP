# + , - , * , / , % , //

num_1  = 10
num_2 = 5 

print(num_1 + num_2)
print(num_1 - num_2)
print(num_1 * num_2)
print(num_1 / num_2)
print(num_1 % num_2)  #vag ses 
print(num_1 // num_2)  #purno vag fol

power = num_1**num_2 
print(power)



# compair

a = 7 

if a > 5 :
    print("true")
else :
    print("false")
    
# Nested

x = 10 

if x > 5 :
    print("x is bigger then 5")
    if(x > 8) :
        print("x is also biggr then 8")
        if(x > 10) :
            print(" x is biger then 10")
        else :
            print ("x is not bigger then 10 ,they are qual")
    else :
        print(" x is not bigger then 8")
else :
    print("x is not bigger then 5")


moon = True 

if moon is True :
    print("the sky is white")
else :
    print("the sky is black")