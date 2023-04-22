N = int(input())

min_id = 1
max_id = N
for i in range(20):
    question_id = (min_id + max_id) // 2
    print('? '+str(question_id), flush=True)
    ans_from_question = int(input())
    if ans_from_question == 0:
        min_id = question_id
    else:
        max_id = question_id
    
    if max_id - min_id == 1:
        print('! '+ str(min_id))
        break
    
    