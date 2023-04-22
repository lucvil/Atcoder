#include <bits/stdc++.h>
using namespace std;

int main(){
	string input;
	int shaffle_num;
	int h;

	while(1){
		cin >> input;
		if(input == "-"){
			break;
		}
		cin >> shaffle_num;


		for(int i = 0; i < shaffle_num; i++){
			cin >> h;
			input = input.substr(h) + input.substr(0,h);
		}

		cout << input << endl;
	}

	return 0;

}

