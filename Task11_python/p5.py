def sumDigits(n):
     if n == 0:
        return 0
     else:
        return int(n % 10) + sumDigits(int(n / 10)) 
   
num = 46842
print("Sum of digits in num =", sumDigits(num))