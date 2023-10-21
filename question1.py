count=0
tot=0
repeat=[]
while 1:
    a=float(input("Enter a number: "))
    if a in repeat:
        print(avg)
        continue
    repeat.append(a)
    count+=1
    tot+=a
    avg=tot/count
    print(avg)