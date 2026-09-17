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