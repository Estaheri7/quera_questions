n = int(input())

films = []

for i in range(n):
    film = input().split(" ")
    films.append(film)

for words in films:
    fixed_words = [word.capitalize() for word in words]
    for j in fixed_words:
        print(j, end=" ")
    print()


