N = int(input())
S = input()

max_score = 0
now_prescore = 0
first_flag = False
for i in range(N):
    if S[i] == '-':
        first_flag = True
        if now_prescore > max_score:
            max_score = now_prescore
        now_prescore = 0
    else:
        now_prescore += 1
    
    if i == N-1 and first_flag and now_prescore > max_score:
        max_score = now_prescore

if max_score != 0:
    print(max_score)
else:
    print(-1)