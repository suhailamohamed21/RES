def factorial(x):
    if x == 1:
        return 1
    else:
        return (x * factorial(x-1))

input = int(input("Enter number: "))
result = factorial(input)
print("the factorial of" , input , "is" , result)
