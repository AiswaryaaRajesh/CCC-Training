#Slice string based on the input number 
str=input()
num
if num<len(str):
  print (str[0:num])
else:
  t=num//len(str)
  r=num%len(str)
  str2=(t*str)+str[0:r]
  print(str2)
  
