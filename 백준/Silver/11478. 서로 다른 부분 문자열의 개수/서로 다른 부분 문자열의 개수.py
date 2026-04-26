words = input()
sum = 0
result = set()
lens=len(words)
temp_word = ''
for i in range(lens):
    temp_word = ''
    for j in range(i, lens):
        temp_word+=words[j]
        if temp_word in result:
            pass
        else:
            # print(temp_word)
            result.add(temp_word)
print(len(result))
