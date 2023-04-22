#include <bits/stdc++.h>
using namespace std;

int main(){
	string match_string;
	cin >> match_string;

	string main_string;
	int match_num = 0;


	while(cin >> main_string){
		if(strcasecmp(match_string.c_str(),main_string.c_str()) == 0){
			match_num += 1;
		}
	}

	cout  << match_num << endl;

}

