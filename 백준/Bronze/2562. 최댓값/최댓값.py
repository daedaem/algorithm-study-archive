numb = []
for i in range(9):
    x = int(input())
    numb += [x]
print(max(numb))
print(numb.index(max(numb))+1)