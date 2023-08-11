def unique(list):
    unique_list = []

    for x in list:
        if x not in unique_list:
            unique_list.append(x)

    print("unique_list =", unique_list)
        
List = [10, 20, 10, 50, 50, 20, 70, 30, 30, 70]
unique(List)
