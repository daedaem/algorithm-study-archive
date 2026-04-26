import sys

arr = set()
numbers = sys.stdin.readlines()
for num in numbers:
    num = (int(num.split()[0])) % 42
    arr.add(num)

print(len(arr))
    