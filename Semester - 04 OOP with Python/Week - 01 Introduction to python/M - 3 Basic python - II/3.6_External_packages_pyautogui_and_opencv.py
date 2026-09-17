import pyautogui
from time import sleep
sleep(3)
n = int(input())
for i in range(0,n+1):
    for j in range(i):
        pyautogui.write('# ', interval=0.25)
    pyautogui.press('enter')
    


# 
# # 
# # # 

