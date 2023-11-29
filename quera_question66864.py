numbers_list = []
numbers = ""
for i in range(1, 5001):
    i = str(i)
    numbers_list.append(i)
numbers = "".join(numbers_list)
k = int(input())
print(numbers[k - 1])