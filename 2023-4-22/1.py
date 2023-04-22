N = int(input())
S = input()
ans = False
flag = False
for i in range(N):
    if S[i] == '|': 
        flag = not flag
    elif S[i] == "*" and flag:
        ans = True
        
if(ans):
    print("in")
else:
    print("out")
    