def mult_matrix(m1, m2):
    n = len(m1)
    result = [[0] * n for i in range(n)]

    for i in range(n):
        for j in range(n):
            for k in range(n):
                result[i][j] += m1[i][k] * m2[k][j]
    return result

def determinant(matrix):
    n = len(matrix)
    if n == 2:
        return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0]
    determinant_number = 0
    sign = 1

    for i in range(n):
        matrix_help = []
        for j in range(1, n):
            row_help = []
            for k in range(n):
                if not (k == i):
                    row_help.append(matrix[j][k])
            matrix_help.append(row_help)
        determinant_help = determinant(matrix_help)
        determinant_number += sign * determinant_help * matrix[0][i]
        sign = -sign
    return determinant_number

def create_matrix(n):
    matrix = []
    for i in range(n):
        row = []
        for j in range(n):
            array = int(input(f"Enter an array for --> [{i}][{j}]: "))
            row.append(array)
        matrix.append(row)

    return matrix

n = int(input("Enter the size of the matrix: "))
if n > 10:
    print("n must be less than 10")
print("Danial's turn: ")
matrix_1 = create_matrix(n)
print("Farzad's turn: ")
matrix_2 = create_matrix(n)

multi_matrix = mult_matrix(matrix_1, matrix_2)
determinant_res = determinant(multi_matrix)

if determinant_res % 2 == 0:
    print("Farzad")
else:
    print("Danial")
