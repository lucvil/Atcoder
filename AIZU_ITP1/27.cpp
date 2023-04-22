#include <bits/stdc++.h>
using namespace std;

int main(){
	int r,c;
	cin >> r >> c;

	int table[r+1][c+1];
	for(int i = 0; i < r; i++){
		for (int j = 0; j < c; j++){
			cin >> table[i][j];
		}
	}

	for(int i = 0; i < r+1; i++){
		table[i][c] = 0;
	}
	for(int j = 0; j < c+1; j++){
		table[r][j] = 0;
	}

	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			table[i][c] += table[i][j];
			table[r][j] += table[i][j];
			table[r][c] += table[i][j];
		}
	}

	for(int i = 0; i < r+1; i++){
		for(int j = 0; j< c+1; j++){
			if(j != 0){
				cout << " ";
			}
			cout << table[i][j];
		}
		cout << endl;
	}

}

