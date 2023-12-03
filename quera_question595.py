
n = int(input())

triangle = []
for i in range(n):
    row = []
    for j in range(i + 1):
        if j == 0 or j == i:
            row.append(1)
        else:
            p_row = triangle[i - 1]
            row.append(p_row[j - 1] + p_row[j])
    triangle.append(row)
    for t in row:
        print(t, end=" ")
    print()
