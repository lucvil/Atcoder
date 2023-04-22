#include <bits/stdc++.h>
using namespace std;

int main(){
	string input;
	cin >> input;
	string input_con = input + input;

	string match_string;
	cin >> match_string;

	if(input_con.find(match_string) != string::npos){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}

	return 0;
}

