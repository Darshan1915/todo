a = int(input("Enter yor number : "))

flag=False

if a == 1:
    print("is not a prime number")
elif a == 2:
    print("Entered number is only which is even as s=well prime")
elif a > 2:
    for i in range(2,(a-1)):
        if (a % i) == 0:
            flag = True
            break
        
    if flag==True:
        print("Entered number is not prime")
    else:
        print("Entered number is prime")
