import numpy as np
import cv2

a = cv2.imread("/home/ayman/learningStuff/ISE_venv/src/hasby.png")
cv2.imshow("Hasby", a)
b = cv2.cvtColor(a, cv2.COLOR_BGR2GRAY)
b[0:50, 0:50] = 0
cv2.imshow("Hasby in gray", b)
cv2.waitKey(0)
# # the third parameter "3" will tell us that the image is a 3 component image "red" "green" "blue"
# print(a.shape)
print(b.shape)  # this will return a color with only 2 elems
print(b[0:5, 0:5])
