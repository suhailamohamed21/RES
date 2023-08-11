def lucky_num(first, last):
    count = 0
    lucky_nums = []
    while first < last:
        first += 1
        List = str(first)

        for digit in List:
            flag = False
            if digit == '4' or digit == '7':
                flag = True
            else:
                flag = False
                break
        if flag:
            lucky_nums.append(first)
            count += 1
    if count:
        return lucky_nums
    else:
        return -1

First = int(input("Enter the start number: "))
Last = int(input("Enter the end number: "))
print("The lucky numbers between", First,"and", Last ,":", lucky_num(First, Last))