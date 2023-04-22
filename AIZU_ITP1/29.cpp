#include <bits/stdc++.h>
using namespace std;

int main(){
	string input;
	int first = 0;

	while(1){
		cin >> input;
		if(cin.eof()){
			break;
		}

		if(first == 0){
			first = 1;
		}else{
			cout << " ";
		}

		for(int i = 0; i < input.length(); i++){
			if( isdigit(input[i])) {
				cout << input[i];
			}else if( islower(input[i])){
				cout << (char)toupper(input[i]);
			}else if(isupper(input[i])){
				cout << (char)tolower(input[i]);
			}else{
				cout << input[i];
			}
		}
	}

	cout << endl;
}

