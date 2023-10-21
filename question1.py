count=0    #sets the denominator value to zero, so the number of elements is updated after every iteration 
tot=0      #sets the value of the sum of the numbers whose average is to be found to zero
repeat=[]  #an empty set which stores the numbers inputed to check it is repeated later or not
while 1:
    a=float(input("Enter a number: "))  

    if a in repeat:       #this loop checks if the number is being repeated or not 
        print(avg)
        d=input(("Do you want to exit?(y/n) "))
        if(d=='y'):
            break
        else:
            continue
    repeat.append(a)      #adds the newly inputed value to the set 
    count+=1
    tot+=a
    avg=tot/count         #calculates the average of the previously inputed numbers
    print(avg)

    d=input(("Do you want to exit?(y/n) "))
    if(d=="y"):
        break
    
    
    
