def count_zeros(number):
    return str(number).count('0')

num = "120200001010"
zeros = count_zeros(num)
print("Number of zeros in", num, "is", zeros)