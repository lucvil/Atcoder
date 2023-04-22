#include <bits/stdc++.h>
using namespace std;

int main(){
	string S;
	cin >> S;

	int ans  = 0;
	int now_long = 0;
	for(int i = 0; i < S.length(); i++){
		if(S[i] == 'A' or S[i] == 'C' or S[i] == 'G' or S[i] == 'T'){
			now_long += 1;
			if(ans < now_long){
				ans = now_long;
			}
		}else{
			now_long = 0;
		}
	}

	cout << ans << endl;
}