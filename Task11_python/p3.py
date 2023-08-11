List = ["suhila mohamed", "ahmed ali", "shimaa esmat", "amin adel"]

First = [item.split(' ', 1)[0] for item in List]
Second = [item.split(' ', 1)[1] for item in List]
print("List =", List, "\n", "First =", First, "\n","Second =", Second)