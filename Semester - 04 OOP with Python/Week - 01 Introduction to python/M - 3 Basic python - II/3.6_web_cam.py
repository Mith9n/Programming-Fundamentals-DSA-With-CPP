import cv2

cam = cv2.VideoCapture(0)  # ক্যামেরা খুলছে

while True:
    ret, frame = cam.read()  # ক্যামেরা ফ্রেম পড়ছে
    
    if not ret: 
        break
    cv2.imshow('my cam', frame) 
    
    if cv2.waitKey(1) & 0xFF == ord('q'):  
        break

cam.release()  # ক্যামেরা বন্ধ
cv2.destroyAllWindows()  # সব উইন্ডো বন্ধ
