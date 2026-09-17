# ✅ Step 1: Define a decorator function named `timer`
def timer(fun):  # 'fun' এখানে সেই function যাকে decorator করা হবে (get_funtion)
    
    # ✅ Step 2: Define an inner function that wraps the original one
    def inner():
        print('time started')  # 👉 এই লাইনটা actual ফাংশন কল করার আগে চলবে
        fun()                  # 👉 এখানে আসল ফাংশন (get_funtion) কল করা হচ্ছে
        print('time ended')    # 👉 ফাংশন শেষ হবার পরে এইটা চলবে
        
    # ✅ Step 3: Return the inner function (not calling it yet!)
    return inner


# ✅ Step 4: Use the decorator
@timer                # এটা লিখার মানে: get_funtion = timer(get_funtion)
def get_funtion():
    print('get funtion')  # 👉 এইটা সেই ফাংশন যাকে আমরা decorate করছি


# ✅ Step 5: Call the function
get_funtion()  # ⚠️ এখন এটা আসল get_funtion() না, বরং timer() থেকে আসা inner()
