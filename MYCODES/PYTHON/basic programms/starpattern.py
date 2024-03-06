# Q11. Write a C program to print the pattern:
# *
# **
# ***
# ****
# *****

# for i in range(1,5,1):
#     for j in range (1,i,1):
#         print("*")
#         print("\n")


for x in range(1,6):
    for y in range(1, x+1):
        print("*",end='')
    print()


# i=1
# j=1
# while (i<=5):
#     while (j<=i):
#         print("*")
#         j+=1
#         print("\n")
#         i+=i
