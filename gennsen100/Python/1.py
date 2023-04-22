n_list = []
x_list = []
while True:
    n_item, x_item = map(int, input().split())
    if n_item == 0 and x_item == 0: break
    n_list.append(n_item)
    x_list.append(x_item)

    
for query_id in range(len(n_list)):
    n = n_list[query_id]
    x = x_list[query_id]
    ans = 0
    for i in range(1,n-1):
        for j in range(i+1,n):
            if j + 1 <= x - i - j and x - i -j <= n:
                ans += 1
    print(ans)
    