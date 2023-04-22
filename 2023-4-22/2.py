N, T = map(int, input().split())
C_list = list(map(int, input().split()))
R_list = list(map(int, input().split()))

max_score = 0
max_score_player = 0
now_card_color = C_list[0]
T_first_flag = True
for i in range(N):
    if C_list[i] == T and T_first_flag:
        now_card_color = T
        max_score = 0
        T_first_flag = False
        
    if C_list[i] == now_card_color and R_list[i] > max_score:
        max_score = R_list[i]
        max_score_player = i
        
print(max_score_player+1)