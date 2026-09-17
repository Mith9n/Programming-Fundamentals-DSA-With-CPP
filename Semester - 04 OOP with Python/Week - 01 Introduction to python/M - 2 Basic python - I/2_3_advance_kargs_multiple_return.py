# kargs - key value argument
# def full name (fist,second,*more) - extra all value (*args)
# def full name (fist,second,**more) - extra all value key pair(*kargs)

def full_name (frist_name , last_name,**more_name):
    name = f"{frist_name} {last_name}"
    print(more_name)
    # key values
    for key,value in more_name.items():
        print(key,value)
    return name

    
# name = full_name("maruf","hasan") 
name = full_name(frist_name="maruf",last_name="hasan",nick_name="mithon",family_name_first="Ayoen",family_name_last="Isam")
print(name)


# return multiple values 

def numbers (n1,n2):
    sum = n1+n2
    mul = n1*n2
    div = n2/n1
    div_abs = n2//n1
    mod = n2%n1
    return sum,mul,div,div_abs,mod

print(numbers(20,3))