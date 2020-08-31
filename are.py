def findArea(r): 
	PI = 3.142
	return PI * (r*r); 
print("Area is %.6f" % findArea(5)); 

filename = input("Input the Filename: ")
f_extns = filename.split(".")
print ("The extension of the file is : " + repr(f_extns[-1]))

