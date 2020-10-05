def getResult(a, i, n, str):
    if i == n:
        s = "abcdefghijklmnopqrstuvwxyz"
        check = [0]*26
      # print(check)
        for ch in str:
            check[s.find(ch)-s.find('a')] += 1
            if check[s.find(ch)-s.find('a')] > 1:
                return 0
        return len(str)
    op1 = getResult(a, i+1, n, str+a[i])
    op2 = getResult(a, i+1, n, str)
    return max(op1, op2)


if __name__ == "__main_":
n = int(input())
a = []
for _ in range(n):
    a.append(input())
out = getResult(a, 0, n, "")
print(out)
