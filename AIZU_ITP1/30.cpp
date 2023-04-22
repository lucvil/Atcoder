#include <bits/stdc++.h>
using namespace std;

int main(){
	string input;
	int ans;
	while(1){
		cin >> input;
		if(input == "0"){
			break;
		}

		ans = 0;

		for(int i = 0; i < input.length(); i++){
			ans += (int)input[i] - (int)'0';
		}

		cout << ans << endl;
	}

	return 0;
}

