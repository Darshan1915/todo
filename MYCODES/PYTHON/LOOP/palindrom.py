#Write a C program to find the sum of digits of a positive integer
num = int(input("Enter number : "))
sum = 0
while ( num > 0):
    sum = sum + num%10
    num = num/34/10
print("Sum of digit in given number is : ",sum)    


