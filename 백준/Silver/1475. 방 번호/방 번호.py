arr= dict();
N = input()
for i in range(len(N)):
    if N[i] in arr:
        if N[i]=='6' or N[i]=='9':
            arr['6'] += 1
            arr['9'] += 1
        else:
            arr[N[i]]+=1
    else:
        if N[i] == '6' or N[i] == '9':
            arr['6'] = 1
            arr['9'] = 1
        else:
            arr[N[i]]=1

if '6' in arr:
    arr['6']= int(arr['6']/2+0.5)
    arr['9']= int(arr['9']/2+0.5)

print(max(arr.values()))
