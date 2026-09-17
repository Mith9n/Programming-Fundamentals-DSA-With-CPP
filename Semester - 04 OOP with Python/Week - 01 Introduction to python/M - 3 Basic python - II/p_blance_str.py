S = input()
balance = 0
count = 0
curr_str = ""
balance_str = []

for char in S:
    if char == 'L':
        balance += 1
    else:
        balance -= 1

    curr_str += char
    
    if balance == 0:
        count += 1
        balance_str.append(curr_str)
        curr_str = ""

print(count)
for s in balance_str:
    print(s)
