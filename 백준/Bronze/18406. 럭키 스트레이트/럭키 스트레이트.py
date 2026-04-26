num = input()
N= len(num)
halfN=N//2
# print(N)
word1 = num[:halfN]
word2 = num[halfN:]
# print(word1)
# print(word2)
newword1=[]
newword2=[]
for i in range(len(word1)):
    newword1.append(int(word1[i]))
    newword2.append(int(word2[i]))
if sum(list(newword1)) == sum(list(newword2)):
    print('LUCKY')
else:
    print('READY')