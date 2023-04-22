#include <bits/stdc++.h>
using namespace std;

long max_ans = 0;
long now = 0;

int draw_square(queue<vector<long> > now_empty_square){

	if(!now_empty_square.empty()){
		for(int i = 0; i < now_empty_square.size(); i++){		
			queue< vector<long> >  next_empty_square;
			vector<long> main_square = now_empty_square.front();
			now_empty_square.pop();
			queue<vector<long> > now_empty_square_copy = now_empty_square;
			long now_empty_square_copy_size = now_empty_square_copy.size();
			for(int j = 0; j < now_empty_square_copy_size; j++){
				vector<long> check_square = now_empty_square_copy.front();
				now_empty_square_copy.pop();
				if((check_square[0] != main_square[0]) and (check_square[1] != main_square[1]) and (abs(check_square[0]-main_square[0]) != abs(check_square[1]-main_square[1]))){
					next_empty_square.push(check_square);
				}
			}
			now += main_square[2];	
			draw_square(next_empty_square);
			now -= main_square[2];
		}
	}else{
		if(now > max_ans) max_ans = now;
	}

	return 0;
}

int main(){
	long S[6][6];
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 6; j++){
			cin >> S[i][j];
		}
	}

	queue< vector<long> >  empty_square;
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 6; j++){
			vector<long> data_ij;
			data_ij.push_back(i);
			data_ij.push_back(j);
			data_ij.push_back(S[i][j]);
			empty_square.push(data_ij);
		}
	}


	draw_square(empty_square);

	cout << max_ans << endl;

}