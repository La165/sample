s="learning"
print("Forward direction")
for i in s:
   print(i,end='')
   print("Forward direction")
   for i in s[::]:
         print(i,end='')
         print("Backward direction")
         for i in s[::-1]:
                  print(i,end='')
