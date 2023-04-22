#include <bits/stdc++.h>
using namespace std;

int main(){
	string input;
	int char_num[26] = {0};
	int change;

	while(1){
		cin >> input;
		if(cin.eof()){
			break;
		}

		for(int i = 0; i < input.length(); i++){
			change = (int)input[i];

			if(change >= 65 and change <= 90){
				change += 32;
			}

			if( change % 97 >= 0 and change % 97 <= 25){
				char_num[change % 97] += 1;
			}

		}		

	}

	for(int i = 0; i < 26; i++){
		char ans = i + 97;
		cout << ans << " : " << char_num[i] << endl;
	}
}

