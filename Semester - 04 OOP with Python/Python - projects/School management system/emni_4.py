
def set_other_name(func):
    print('i cannot set name, without nid.')
    return func  # ডেকোরেটর ফাংশনকে অবশ্যই ফাংশন রিটার্ন করতে হয়

# ✅ Apply decorator properly
@set_other_name
def hello():
    def my_name():
        print("maruf hasan mithon")
    return my_name

hello()()  # কারণ hello() রিটার্ন করে my_name, তাই আবার () দিতে হবে
