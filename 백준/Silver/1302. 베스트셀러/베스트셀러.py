N = int(input())
books = dict()
n=''
maxbooks=''
for i in range(N):
    n = input()
    if n in books:
        books[n]+=1
    else:
        books[n] = 1
maxx=0
maxbooks=chr(ord('z')+1)
books = sorted(books.items())
for i in books:
    if maxx < i[1]:
        maxx=i[1]
        maxbooks=i[0]
print(maxbooks)