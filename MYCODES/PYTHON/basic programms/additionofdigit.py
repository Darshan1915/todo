num = int ( input ("Enetr the number : "))
sum = 0
while (num>0):
    sum = sum + num % 10
    num//10
    
print("Adition of digit is : ",sum)
