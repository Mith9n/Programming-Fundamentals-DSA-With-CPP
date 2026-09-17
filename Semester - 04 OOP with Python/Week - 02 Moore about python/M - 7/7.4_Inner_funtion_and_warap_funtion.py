#function is a first class object 
def dubble_decker():
    print('start the double ducker')
    def inner_fun():
        print("Inside the funtion")
        return 500
    return inner_fun


print(dubble_decker()())


def do_some_thing(work):
    print("start")
    work()
    print('end')
    

def coding():
    print("doing coding")
    
do_some_thing(coding)
