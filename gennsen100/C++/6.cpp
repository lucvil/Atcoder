#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main(){
	string S;
	int N;
	cin >> N >> S;

	int ans = 0;

	string A;

	int char_num = 0;

	for(int i = 0; i < 1000; i ++){
		A = to_string(i);
		A = "00" + A;
		A = A.substr(A.length()-3,3);

		char_num = 0;
		for(int j = 0; j < N; j++){
			if(char_num > 2) break;
			if(S[j] == A[char_num]) char_num += 1;
		}
		if(char_num == 3) ans += 1;	
	}

	cout << ans << endl;
	return 0;
}