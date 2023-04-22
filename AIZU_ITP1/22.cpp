#include <bits/stdc++.h>
using namespace std;

int main(){
	int Card[4][13] = {};
	string kind;
	int kind_num;

	int n;
	int num;
	cin >> num;

	for(int i = 0; i < n; i++){
		cin >> kind >> num;
		if(kind == "S"){
			kind_num = 0;
		}else if(kind == "H"){
			kind_num = 1;
		}else if(kind == "C"){
			kind_num = 2;
		}else if(kind == "D"){
			kind_num = 3;
		}

		Card[kind_num][num-1] = 1;
	}

	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 13; j++){
			if(Card[i][j] == 0){
				if(i == 0){
					cout << "S";
				}else if(i == 1){
					cout << "H";
				}else if(i == 2){
					cout << "C";
				}else if(i == 3){
					cout << "D";
				}
				cout << " " << j+1 << endl;
			}
		}
	}
}

