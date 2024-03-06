#Q5. Write a C program to calculate the factorial of a given number.

num = int ( input ("Enetr the number : "))
add = 1
for i in range(num,0,-1):
    add = add*i
print("Factorial = ",add)

