#include <bits/stdc++.h>
using namespace std;

int my_print(string input, int a, int b){
	cout << input.substr(a,b-a+1) << endl;
	return 0;
}

string my_reverse(string input, int a, int b){
	reverse(&input[a],&input[b+1]);
	return input;
}

string my_replace(string input, int a, int b, string swap){
	return input.substr(0,a) +swap + input.substr(b+1,input.length()-b-1);
}


int main(){
	string input;
	cin >> input;

	int query;
	cin >> query;

	string query_fun;
	int query_a, query_b;
	string query_op;

	string ans;

	for(int i = 0; i < query; i++){
		cin >> query_fun;
		if(query_fun == "print"){
			cin >> query_a >> query_b;
			my_print(input,query_a,query_b);
		}else if(query_fun == "reverse"){
			cin >> query_a >> query_b;
			input = my_reverse(input,query_a,query_b);
		}else if(query_fun == "replace"){
			cin >> query_a >> query_b >> query_op;
			input = my_replace(input,query_a,query_b,query_op);
		}
	}
}

