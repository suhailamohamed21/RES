def Second(list):
    length = len(list)
    list.sort()

    print("List after sort =", list)
    print("the second largest number is", list[length-2])
    print("the second smallest number is", list[1])

List = [5, 3, 9, 8, 1, 2, 4]
print("List before sort =", List)
Second(List)
